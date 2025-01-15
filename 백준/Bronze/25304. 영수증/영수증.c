#include <stdio.h>

int main(void) {
    int total;
    int n;
    int sum = 0;
    int price, cnt;
    scanf("%d %d", &total, &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &price, &cnt);
        sum += price * cnt;
    }
    if (sum == total) printf("Yes");
    else printf("No");
    
    return 0;
}
