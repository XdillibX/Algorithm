#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i) printf("*");
            else if (j > n - 1 + i) {
                break;
            }
            else printf(" ");
        }
        puts("");
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (j >= i && j <= 2*n-2 - i) printf("*");
            else if (j > 2*n-2 - i) {
                break;
            }
            else printf(" ");
        }
        puts("");
    }
    
    return 0;
}
