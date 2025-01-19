#include <stdio.h>
#include <math.h>

int main(void) {
    int num[1000001] = { 1,1, 0 };
    int m, n;

    scanf("%d %d", &m, &n);
    

    for (int i = 2; i <= sqrt(n); i++) {
        if (num[i] == 0) {
            for (int j = 2; i*j <= n; j++) {
                num[i*j] = 1;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (num[i] == 0) printf("%d\n", i);
    }
}
