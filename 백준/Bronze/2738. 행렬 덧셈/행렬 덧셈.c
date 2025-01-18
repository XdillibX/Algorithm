#include <stdio.h>

int main(void) {
    int n, m;
    int mat1[100][100];
    int mat2[100][100];
    
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        puts("");
    }
    
    
    return 0;
}
