#include <stdio.h>

int main(void) {
    long N;
    int B;
    char str[100] = {0};
    char tmp[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cnt = 0;
    
    scanf("%ld %d", &N, &B);
    
    do {
        str[cnt++] = tmp[N % B];
        N /= B;
    } while(N > 0);
    
    for (int i = cnt - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    return 0;
}
