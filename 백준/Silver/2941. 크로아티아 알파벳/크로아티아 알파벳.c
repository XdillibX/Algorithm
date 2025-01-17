#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    int cnt;
    
    scanf("%s", str);
    cnt = strlen(str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '=') {
            if (str[i-1] == 'c') {
                cnt--;
            }
            if (str[i-1] == 's') {
                cnt--;
            }
            if (str[i-1] == 'z') {
                cnt--;
                if (str[i-2] == 'd') {
                    cnt--;
                }
            }
        }
        if (str[i] == '-') {
            if (str[i-1] == 'c') {
                cnt--;
            }
            if (str[i-1] == 'd') {
                cnt--;
            }
        }
        if (str[i] == 'j') {
            if (str[i-1] == 'l') {
                cnt--;
            }
            if (str[i-1] == 'n') {
                cnt--;
            }
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
