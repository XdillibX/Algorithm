//
//  14916.c
//  거스름돈
//
//  Created by dillib on 1/12/25.
//

#include <stdio.h>

int main(void) {
    int n;
    int cnt = 0;
    
    scanf("%d", &n);
    
    while (n > 1) {
        if (!(n % 2 == 0 && n % 5 != 0)) {
            n -= 5;
            cnt++;
        }
        else {
            n -= 2;
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
