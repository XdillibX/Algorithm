#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    char tmp[4] = {0};
    char* letter[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int cnt = 0;
    int a;
    int isTure;
    
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i += a) {
        a = 0;
        isTure = 0;
        tmp[0] = 0;
        tmp[1] = 0;
        tmp[2] = 0;
        tmp[3] = 0;
        for (int j = 0; j < 3; j++) {
            a++;
            tmp[j] = str[i + j];
            for (int k = 0; k < 8; k++) {
                if (strcmp(tmp, letter[k]) == 0) {
                    cnt++;
                    cnt -= a - 1;
                    isTure = 1;
                    break;
                }
            }
            if (isTure) break;
            else {
                cnt++;
                if (j == 2) {
                    a = 1;
                    cnt -= 2;
                }
            }
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
