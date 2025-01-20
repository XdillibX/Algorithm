#include <stdio.h>
#include <math.h>

int prime[10000001] = {1,1,0};

int main(void) {
    long N;
    
    scanf("%ld", &N);
    
    for (int i = 2; i <= sqrt(N); i++) {
        if (!prime[i]) {
            for (int j = 2; i * j <= N; j++) {
                prime[i*j] = 1;
            }
        }
    }
    
    long tmp = N;
    for (long i = 0; i <= N; i++) {
        if (!prime[i]) {
            while (tmp % i == 0) {
                tmp /= i;
                printf("%ld\n", i);
            }
        }
    }
    
    return 0;
}
