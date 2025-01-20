#include <stdio.h>
#include <math.h>

int main(void) {
    int M,N;
    int sum = 0;
    int cnt = 0;
    int min = 0;
    int prime[10001] = {1,1,0};
    
    scanf("%d %d", &M, &N);
    
    for (int i = 2; i <= sqrt(N); i++) {
        if (!prime[i]) {
            for (int j = 2; i * j <= N; j++) {
                prime[i*j] = 1;
            }
        }
    }
    
    for (int i = M; i <= N; i++) {
        if (!prime[i]) {
            sum += i;
            cnt++;
            if (cnt == 1) {
                min = i;
            }
        }
    }
    if (cnt == 0) printf("-1");
    else printf("%d\n%d", sum, min);
    
    return 0;
}
