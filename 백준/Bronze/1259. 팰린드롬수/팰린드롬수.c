#include <stdio.h>

int main(void) {
    int n;
    int e[5] = {0};
    int i;
    int cnt;
    
    while(1) {
        scanf("%d", &n);
        if (n == 0) break;
        i = 0;
        cnt = 0;
        while(1) {
            e[i] = n % 10;
            i++;
            if (n % 10 == n) break;
            n /= 10;
        }
        for (int j = 0; j < i / 2; j++) {
            if (e[j] == e[i-1-j]) cnt++;
        }
        if (cnt == i/2) puts("yes");
        else puts("no");
    }
    
    return 0;
}
