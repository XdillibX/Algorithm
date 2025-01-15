#include <stdio.h>

int main(void) {
    long n;
    long min, max;
    long num[1000000];
    
    scanf("%ld", &n);
    
    for (long i = 0; i < n; i++)
        scanf("%ld", &num[i]);
    
    min = num[0];
    max = num[0];
    
    for (long i = 0; i < n; i++) {
        if (min >= num[i])
            min = num[i];
        if (max <= num[i])
            max = num[i];
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
