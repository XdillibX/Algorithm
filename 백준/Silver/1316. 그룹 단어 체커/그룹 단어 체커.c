//
//  1316.c
//  Back
//
//  Created by 이기현 on 1/12/25.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    int t;
    int det = 0;
    int cnt = 0;
    int ddd = 0;
    
    char tmp;
    char str[101];
    
    scanf("%d", &n);
    t = n;
    
    while(n--) {
        scanf("%s", str);
        
        for (int i = 0; i < strlen(str); i++) {
            tmp = str[i];
            det = 0;
            ddd = 0;
            for (int j = i; j < strlen(str); j++) {
                if (tmp != str[j]) {
                    det = 1;
                }
                else if (tmp == str[j] && det == 1) {
                    cnt++;
                    ddd = 1;
                    break;
                }
            }
            if (ddd == 1) break;
        }
    }
    
    printf("%d", t - cnt);
    
    return 0;
}

