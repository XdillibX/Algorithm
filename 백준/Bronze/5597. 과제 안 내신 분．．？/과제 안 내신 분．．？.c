#include <stdio.h>

int main(void) {
    int stu[30] = {0};
    int a;
    
    for (int i = 0; i < 28; i++) {
        scanf("%d", &a);
        stu[a-1]++;
    }
    
    for (int i = 0; i < 30; i++) {
        if (stu[i] == 0) {
            printf("%d\n", i+1);
        }
    }
    
    return 0;
}
