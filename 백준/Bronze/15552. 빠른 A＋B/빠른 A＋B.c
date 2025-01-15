#include <stdio.h>

int main(void) {
    long n;
    int a,b;
    scanf("%ld", &n);

    for (long i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    
    
    return 0;
}
