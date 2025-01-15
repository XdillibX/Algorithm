#include <stdio.h>
#include <string.h>

int main(void) {
    long cnt = 0;
    char str[1000001];
    
    scanf("%[^\n]", str);
    for (long i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (i != 0 && i != strlen(str) - 1) {
                cnt++;
            }
        }
        if (strcmp(str, " ") == 0) cnt--;
    }
    printf("%ld", cnt + 1);
    
    return 0;
}
