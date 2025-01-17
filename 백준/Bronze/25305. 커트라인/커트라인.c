#include <stdio.h>

int main(void) {
    int n, k;
    int num[1000];
    int cnt = 1;
    int a = 1;
    
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (num[i] <= num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    if (n == 1) {
        printf("%d", num[0]);
    }
    else {
        printf("%d", num[k - 1]);
    }
    
    return 0;
}
