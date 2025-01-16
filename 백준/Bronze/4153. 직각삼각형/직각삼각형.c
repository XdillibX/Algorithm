#include <stdio.h>


int main(void) {
    int num[3] = {1,1,1};
    
    while(1) {
        scanf("%d %d %d", &num[0], &num[1], &num[2]);
        if (num[0] == 0 && num[1] == 0 && num[2] == 0) {
            break;
        }
        for (int i = 0; i < 2; i++) {
            for (int j = i; j < 3; j++) {
                if (num[i] > num[j]) {
                    int tmp = num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                }
            }
        }
        if (num[2] * num[2] == num[1] * num[1] + num[0] * num[0]) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }
    
    
    return 0;
}

