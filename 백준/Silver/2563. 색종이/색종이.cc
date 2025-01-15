//
//  2563.c
//  Back
//
//  Created by dillib on 1/12/25.
//

#include <stdio.h>

int main (void) {
    int mat[100][100] = {0};
    int n;
    int x, y;
    int area = 0;
    
    scanf("%d", &n);
    
    while(n--) {
        scanf("%d %d", &x, &y);
        for (int i = x ; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                mat[i][j] = 1;
            }
        }
    }
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (mat[i][j] == 1) area++;
        }
    }
    
    printf("%d", area);
    
    return 0;
}
