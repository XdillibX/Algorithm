#include <stdio.h>

int main(void) {
    int n,m;
    char str[10][11];
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", str[i][m-1-j]);
        }
        puts("");
    }
    return 0;
}
