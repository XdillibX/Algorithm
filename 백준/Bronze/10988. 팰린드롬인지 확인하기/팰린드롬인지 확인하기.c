#include <stdio.h>
#include <string.h>

int det(char str[]) {
    for (int i = 0; i < strlen(str)/2; i++) {
        if (str[i] != str[strlen(str) - 1 - i]) return 0;
    }
    return 1;
}

int main(void) {
    char str[101];
    
    scanf("%s", str);
    
    printf("%d", det(str));
    
    return 0;
}
