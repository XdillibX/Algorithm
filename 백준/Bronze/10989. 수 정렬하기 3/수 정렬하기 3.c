#include <stdio.h>

long num[10000] = {0};

int main(void) {
    long n;
    int a;
    
    scanf("%ld", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        num[a-1]++;
    }
    
    
    for (int i = 0; i < 10000; i++) {
        for (long j = 0; j < num[i]; j++) {
            printf("%d\n", i+1);
        }
    }
 
    return 0;
}
