//
//  1312.c
//  Back
//
//  Created by 이기현 on 1/12/25.
//

#include <stdio.h>

int main(void) {
    int a, b, n, result;
    
    scanf("%d %d %d", &a, &b, &n);
    while(n--) {
        a %= b;
        a *= 10;
        result = a/b;
    }
    
    printf("%d", result);
    
    
    
    return 0;
}

