#include <stdio.h>

int fac(int n) {
    if (n == 0) return 1;
    else if (n == 1) return 1;
    else {
        return n * fac(n-1);
    }
}

int main(void) {
    int n,m;
    
    scanf("%d %d", &n, &m);
    
    printf("%d", fac(n) / (fac(m) * fac(n - m)));
    
    
    return 0;
}
