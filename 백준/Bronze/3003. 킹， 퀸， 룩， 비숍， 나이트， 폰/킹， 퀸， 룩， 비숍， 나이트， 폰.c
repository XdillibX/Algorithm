#include <stdio.h>

int main(void) {
    int num[6];
    int ans[6] = {1, 1, 2, 2, 2, 8};
    int need[6];
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
        need[i] = ans[i] - num[i];
        printf("%d ", need[i]);
    }
    
    return 0;
}
