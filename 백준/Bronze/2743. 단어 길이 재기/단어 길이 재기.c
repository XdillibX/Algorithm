#include <stdio.h>

int main(void) {
    char str[101];
    int cnt = 0;
    scanf("%s", str);
    
    while(str[cnt] != 0) {
        cnt++;
    }
    
    printf("%d", cnt);
    
    return 0;
}
