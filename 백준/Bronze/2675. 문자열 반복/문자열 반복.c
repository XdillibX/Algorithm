#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    int a;
    char str[21];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &a, str);
        for (int j = 0; j < strlen(str); j++) {
            for (int k = 0; k < a; k++) {
                printf("%c", str[j]);
            }
        }
        puts("");
    }
    
    return 0;
}
