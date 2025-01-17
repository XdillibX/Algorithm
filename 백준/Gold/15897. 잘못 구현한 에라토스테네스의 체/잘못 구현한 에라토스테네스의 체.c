#include <stdio.h>

int main(void) {
    long n;
    long long sum;
    long long j = 1;
    long long cnt;

    scanf("%ld", &n);
    
    sum = n;
    
    for (long i = 2; i < n; i = j + 1) {
        j = (n - 1) / ((n- 1 ) / i);
        cnt = 1 + (n - 1) / i;
        sum += (j - i + 1) * cnt;
    }
    
    if (n != 1) sum++;
    
    printf("%lld", sum);
 
    return 0;
}
