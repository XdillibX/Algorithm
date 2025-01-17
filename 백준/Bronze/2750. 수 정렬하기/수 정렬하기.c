#include <stdio.h>

int main(void) {
    int n;
    int num[1000];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (num[i] > num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}
