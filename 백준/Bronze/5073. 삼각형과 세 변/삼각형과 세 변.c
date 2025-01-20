#include <stdio.h>

int main(void) {
    int len[3];
    
    while(1) {
        scanf("%d %d %d", &len[0], &len[1], &len[2]);
        if (len[0] == 0 && len[1] == 0 && len[2] == 0) break;
        
        for (int i = 0; i < 2; i++) {
            for (int j = i; j < 3; j++) {
                if (len[i] > len[j]) {
                    int tmp = len[i];
                    len[i] = len[j];
                    len[j] = tmp;
                }
            }
        }
        
        if (len[2] >= len[0] + len[1]) printf("Invalid\n");
        else {
            if (len[0] != len[1] && len[0] != len[2] && len[1] != len[2]) printf("Scalene\n");
            else if (len[0] == len[1] && len[1] == len[2]) printf("Equilateral\n");
            else printf("Isosceles\n");
        }
    }
    
    return 0;
}
