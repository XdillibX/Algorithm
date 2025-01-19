#include <stdio.h>

int main(void) {
    int max = 0;
    int a = 0,b = 0;
    int mat[9][9];
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > max) {
                a = i;
                b = j;
                max = mat[i][j];
            }
        }
    }
    
    printf("%d\n%d %d", max, a + 1, b + 1);
    
    return 0;
}
