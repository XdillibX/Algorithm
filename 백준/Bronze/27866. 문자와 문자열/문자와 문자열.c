#include <stdio.h>

int main(void) {
    char str[1001];
    int n;
    scanf("%s %d", str, &n);
    printf("%c", str[n - 1]);
    
    return 0;
}
