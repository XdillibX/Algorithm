#include <stdio.h>

int main(void) {
    int N, M;
    int baguni[100];
    int a,b;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        baguni[i] = i+1;
    }
    
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        int tmp = baguni[a-1];
        baguni[a-1] = baguni[b-1];
        baguni[b-1] = tmp;
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", baguni[i]);
    }
    
    return 0;
}
