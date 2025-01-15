#include <stdio.h>

int main(void) {
    int V;
    int n;
    int num[100];
    int cnt = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    
    scanf("%d", &V);
    
    for (int i = 0; i < n; i++)
        if (V == num[i])
            cnt++;
    
    printf("%d", cnt);
    
    return 0;
}
