#include <stdio.h>

int main(void) {
    int num[9];
    int max = 0;
    int n;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        if (num[i] >= max) {
            max = num[i];
            n = i;
        }
    }
    
    printf("%d\n%d", max, n+1);
    
    return 0;
}
