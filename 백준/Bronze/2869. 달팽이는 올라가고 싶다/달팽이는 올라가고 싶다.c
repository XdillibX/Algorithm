#include <stdio.h>

int main(void) {
    long A,B,V;
    long day = 0;
    
    scanf("%ld %ld %ld", &A, &B, &V);
    
    long tmp = V - A;
    
    day += tmp % (A-B) == 0 ? tmp / (A-B) : tmp / (A-B) + 1;
    
    printf("%ld", ++day);
    
    return 0;
}
