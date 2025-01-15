//
//  2839.c
//  Back
//
//  Created by 이기현 on 1/12/25.
//

#include <stdio.h>

int main(void) {
    int n;
    int cnt = 0;
    
    scanf("%d", &n);
    
    while (n > 2) {
        if (!(n % 3 == 0 && n % 5 != 0)) {
            n -= 5;
            cnt++;
        }
        else {
            n -= 3;
            cnt++;
        }
    }
    
    if (n == 0) {
        printf("%d", cnt);
    }
    else {
        printf("%d", -1);
    }   
    
    return 0;
}

