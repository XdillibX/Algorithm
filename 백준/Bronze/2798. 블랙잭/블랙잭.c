#include <stdio.h>

int main(void) {
    int N, M;
    long num[100];
    int max = 0;
    int sum = 0;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        scanf("%ld", &num[i]);
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            for (int k = 0; k < N; k++) {
                if (i == k || j == k) continue;
                sum = 0;
                sum += num[i] + num[j] + num[k];
                if (sum > max && sum <= M) max = sum;
            }
        }
    }
    
    printf("%d", max);
    
    return 0;
}

