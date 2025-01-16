#include <stdio.h>

int num(int k, int n) {
    if (n == 1) return 1;
    if (k == 0) return n;
    return num(k-1,n) + num(k,n-1);
}

int main(void) {
    int N;
    int k, n;

    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", num(k,n));
    }
    
    return 0;
}
