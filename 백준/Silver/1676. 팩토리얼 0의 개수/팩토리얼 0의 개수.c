#include <stdio.h>

int countZeroOfFac(int n) {
    int cnt;
    int isFive = 0;
    int isTwo = 0;
    
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while(tmp > 0) {
            if (tmp % 5 == 0) {
                isFive++;
                tmp /= 5;
            }
            else if (tmp % 2 == 0) {
                isTwo++;
                tmp /= 2;
            }
            else {
                break;
            }
        }
    }
    
    cnt = isTwo >= isFive ? isFive : isTwo;
    
    return cnt;
}

int main(void) {
    int N;
    scanf("%d", &N);
    printf("%d", countZeroOfFac(N));
    
    return 0;
}