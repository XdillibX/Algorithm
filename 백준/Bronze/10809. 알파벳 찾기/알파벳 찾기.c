#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    int cnt;
    
    scanf("%s", str);
    
    for (int i = 0; i < 26; i++) {
        cnt = -1;
        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == i + 'a') {
                cnt = j;
                printf("%d ", cnt);
                break;
            }
        }
        if (cnt == -1) printf("%d ", -1);
    }
    
    return 0;
}
