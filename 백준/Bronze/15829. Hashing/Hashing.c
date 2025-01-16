#include <stdio.h>

int main(void) {
    int n;
    long long tmp = 1;
    long long ans = 0;
    char str[51];
    
    scanf("%d %s", &n, str);
    
    for (int i = 0; i < n; i++) {
        ans = (ans + (str[i] - 'a' + 1) * tmp) % 1234567891;
        tmp = (tmp * 31) % 1234567891;
    }
    
    printf("%lld", ans);
    
    return 0;
}
