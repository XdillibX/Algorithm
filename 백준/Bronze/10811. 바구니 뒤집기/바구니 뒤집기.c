#include <stdio.h>

int main(void) {
    int N, M;
    int num[100];
    int a,b;
    
    for (int i = 0; i < 100; i++) {
        num[i] = i+1;
    }
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        for (int j = 0; j < (b - a + 1) / 2; j++) {
            int tmp = num[a - 1 + j];
            num[a - 1 + j] = num[b - 1 - j];
            num[b - 1 - j] = tmp;
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}
