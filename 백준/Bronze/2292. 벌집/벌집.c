#include <stdio.h>

int main(void) {
    long n;
    int cnt = 1;
    
    scanf("%ld", &n);
    n--;
    
    for (int i = 1; i <= 18257; i++) {
        if (n <= 0) break;
        n -= 6 * i;
        cnt++;
    }
    
    printf("%d", cnt);
}


