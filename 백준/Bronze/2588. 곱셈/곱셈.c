//
//  2583.c
//  곱셈
//
//  Created by dillib on 1/15/25.
//

#include <stdio.h>

int main(void) {
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n%d\n%d\n%d", a * (b%10), a * (b % 100 - b % 10) / 10, a * (b - b % 100) / 100, a*b);
    
    return 0;
}
