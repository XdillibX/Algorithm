#include <stdio.h>

int main(void) {
    int N, M;
    int baguni[100] = {0};
    int a,b,n;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &a, &b, &n);
        
        for (int j = (a - 1); j < b; j++) {
            baguni[j] = n;
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", baguni[i]);
    }
    
    return 0;
}
