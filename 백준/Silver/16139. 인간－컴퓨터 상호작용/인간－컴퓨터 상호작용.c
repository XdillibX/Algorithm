//
//  16139.c
//  문자열 누적 합
//
//  Created by dillib on 1/13/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[200001];
    char det;
    int n;
    int l,r;
    int* sum[26];
    int* cnt;
    
    scanf("%s", str);
    scanf("%d", &n);
    
    
    for (int i = 0; i < 26; i++)
        sum[i] = (int*)malloc(sizeof(int) * (strlen(str) + 1));
    cnt = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < 26; i++)
        for (int j = 0; j  < strlen(str); j++)
            sum[i][j] = 0;
    
    for (int i = 0; i < 26; i++) {
        for (int j = 1; j <= strlen(str); j++) {
            if (str[j-1] == i + 'a') sum[i][j] = sum[i][j-1] + 1;
            else sum[i][j] = sum[i][j-1];
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        scanf(" %c %d %d", &det, &l, &r);
        
        cnt[i] = sum[det - 'a'][r+1] - sum[det - 'a'][l];
    }
    
    for (int i = 0; i < n; i++)
        printf("%d\n", cnt[i]);
    
    for (int i = 0; i < 26; i++)
        free(sum[i]);
    free(cnt);
    
    return 0;
}
