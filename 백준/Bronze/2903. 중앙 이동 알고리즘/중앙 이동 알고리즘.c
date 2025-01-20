#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    long sum = 2;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        sum += pow(2,i);
    }
    
    printf("%.f", pow(sum,2));
    
    return 0;
}
