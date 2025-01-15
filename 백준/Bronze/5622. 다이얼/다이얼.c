#include <stdio.h>
#include <string.h>

int main(void) {
    int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int t = 0;
    char str[16];
    
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        t += time[str[i] - 65];
    }
    
    printf("%d", t);
    
    return 0;
}
