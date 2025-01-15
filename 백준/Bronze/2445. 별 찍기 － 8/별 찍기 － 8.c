#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < 2 * N - 1; i++) {
        for (int j = 0; j < 2 * N; j++) {
            if (i < N && (j <= i || j >= 2 * N - 1 - i))  {
                printf("*");
                continue;
            }
            else if (i >= N && ((j > i || j < 2 * N - 1 - i))) {
                printf("*");
                continue;
            }
            printf(" ");
        }
        puts("");
    }
    return 0;
}