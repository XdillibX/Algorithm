#include <stdio.h>

int main(void) {
    char num[101];
    int n;
    int sum = 0;
    scanf("%d %s", &n, num);
    
    for (int i = 0; i < n; i++) {
        sum += num[i] - 48;
    }
    printf("%d", sum);
    return 0;
}
