#include <stdio.h>

int main(void) {
    int N;
    int length = 2;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        length += length - 1;
    }
    
    printf("%d", length * length);
    
    return 0;
}
