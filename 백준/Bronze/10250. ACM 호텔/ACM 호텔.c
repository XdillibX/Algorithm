#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int N, a, b, n;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &a, &b, &n);
        
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < a; k++) {
                n--;
                if (n == 0) {
                    a = k+1;
                    b = j+1;
                    break;
                }
            }
            if (n==0) break;
        }
        
        printf("%d\n", a*100 + b);
    }
    
    return 0;
}

