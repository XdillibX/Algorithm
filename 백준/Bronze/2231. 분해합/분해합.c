#include <stdio.h>

int main(void) {
    long N;
    long a;
    long sum;
    int ded = 0;
    
    scanf("%ld", &N);
    
    for (long i = 1; i <= N; i++) {
        sum = i;
        a = i;
        while(a > 0) {
            sum += a % 10;
            a /= 10;
        }
        if (sum == N) {
            printf("%ld", i);
            ded = 1;
            break;
        }
    }
    if (ded == 0) puts("0");
    
    return 0;
}
