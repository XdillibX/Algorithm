#include <stdio.h>

int main(void) {
    int N;
    int doll;
    int cnt[4];
    int num[] = {25, 10, 5, 1};
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &doll);
        for (int j = 0; j < 4; j++) {
            cnt[j] = 0;
            while(doll >= num[j]) {
                doll -= num[j];
                cnt[j]++;
            }
            printf("%d ", cnt[j]);
            if (j == 3) puts("");
        }
    }
    
    return 0;
}
