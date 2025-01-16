#include <stdio.h>

int main(void) {
    int n;
    int tmp;
    long ans = 0;
    char str[51];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]);
        tmp = 1;
        for (int j = 0; j < i; j++) {
            tmp *= 31;
        }
        ans += (int)(str[i] - 'a' + 1) * tmp;
    }
    
    printf("%ld", ans % 1234567891);
    
    return 0;
}
