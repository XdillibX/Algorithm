#include <stdio.h>

int main(void) {
    int V;
    int n;
    int num[10000];
    
    scanf("%d %d", &n, &V);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    
    for (int i = 0; i < n; i++)
        if (V > num[i]) {
            printf("%d ", num[i]);
        }
            
    
    
    
    return 0;
}
