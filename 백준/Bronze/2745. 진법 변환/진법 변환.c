#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    long num = 0;
    int B;
    int tmp;
    char str[10];
    
    scanf("%s %d", str, &B);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[strlen(str) - 1 - i] >= 'A' && str[strlen(str) - 1 - i] <= 'Z') {
            tmp = str[strlen(str) - 1 - i] - 'A' + 10;
            num += tmp * pow(B, i);
        }
        else {
            tmp = str[strlen(str) - 1 - i] - '0';
            num += tmp * pow(B, i);
        }
    }
    
    printf("%ld", num);
    
    return 0;
}
