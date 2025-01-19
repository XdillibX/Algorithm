#include <stdio.h>

int main(void) {
    int n;
    int N,M;
    long long cnt = 1;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        cnt = 1;
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++) {
            cnt *= (M - i);
            cnt /= (i+1);
        }
        printf("%lld\n", cnt);
    }
    
    return 0;
}