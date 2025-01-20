#include <stdio.h>

int main(void) {
    int n;
    int divisor[10000];
    int cnt = 0;
    int sum = 0;
    
    while(1) {
        cnt = 0;
        sum = 0;
        
        scanf("%d", &n);
        if (n == -1) break;
        
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                divisor[cnt++] = i;
            }
        }
        
        for (int i = 0; i < cnt; i++) {
            sum += divisor[i];
        }
        if (sum == n) {
            printf("%d = ", n);
            for (int i = 0; i < cnt; i++) {
                printf("%d", divisor[i]);
                if (i != cnt-1) {
                    printf(" + ");
                }
            }
            puts("");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }
    
    return 0;
}
