#include <stdio.h>

int main(void) {
    char a;
    
    while((a = getchar()) != EOF) {
        putchar(a);
    }
    
    return 0;   
}
