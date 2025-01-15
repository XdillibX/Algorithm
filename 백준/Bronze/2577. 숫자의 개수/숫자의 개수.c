#include <stdio.h>

int main(void) {
    int num[10] = {0};
    long n = 1;
    int a;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a);
        n *= a;
    }
    
    while(n != 0) {
        num[n % 10]++;
        n /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    
    
    return 0;
}
