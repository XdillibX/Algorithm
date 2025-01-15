#include <stdio.h>

int main(void) {
    char str[1001];
    int cnt = 0;
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        cnt = 0;
        scanf("%s", str);
        
        while(str[cnt] != 0) {
            cnt++;
        }
        
        printf("%c%c\n", str[0], str[cnt-1]);
    }
    
    return 0;
}
