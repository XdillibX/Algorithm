#include <stdio.h>

int main(void) {
    int sum = 0;
    int num[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 5; j++) {
            if (num[i] >= num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    
    printf("%d\n%d", sum / 5, num[2]);
    
    return 0;
}
