#include <stdio.h>


int main(void) {
    int n;
    int num;
    int cnt = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        for (int j = 2; j <= 1000; j++) {
            if (num == 0) {
                break;
            }
            if (num % j == 0) {
                if (num == j) {
                    cnt++;
                }
                break;
            }
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}

