#include <stdio.h>
#include <stdlib.h>

long num[1000000];

int static compare (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    long n;
    
    scanf("%ld", &n);
    
    for (long i = 0; i < n; i++) {
        scanf("%ld", &num[i]);
    }

    qsort(num, n, sizeof(long), compare);

    for (long i = 0; i < n; i++) {
        printf("%ld\n", num[i]);
    }

    return 0;
}
