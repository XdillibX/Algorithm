#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a1[10000001];
char b1[1001];
char c1[1001];

int main(void) {
    scanf("%s %s %s", a1, b1, c1);
    
    printf("%d\n", atoi(a1)+atoi(b1)-atoi(c1));
    
    strcat(a1,b1);
    
    printf("%d", atoi(a1) - atoi(c1));
    
    
    return 0;
}
