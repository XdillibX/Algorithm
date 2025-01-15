#include <stdio.h>

int main(void) {
    int num[42] = {0};
    int cnt = 0;
    int n;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        num[n%42]++;
    }
    
    for (int i = 0; i < 42; i++) {
        if (num[i] != 0) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
