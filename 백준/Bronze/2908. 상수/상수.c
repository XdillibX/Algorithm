#include <stdio.h>

int main(void) {
    char a[4];
    char b[4];
    char tmp;
    
    scanf("%s %s", a, b);
    
    tmp = a[0];
    a[0] = a[2];
    a[2] = tmp;
    
    tmp = b[0];
    b[0] = b[2];
    b[2] = tmp;
    
    if (a[0] * 100 + a[1] * 10 + a[2] > b[0] * 100 + b[1] * 10 + b[2]) printf("%s", a);
    else printf("%s", b);
    
    return 0;
}
