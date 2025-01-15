//
//  11659.c
//  구간 합 구하기 4
//
//  Created by dillib on 1/13/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    int num[100000];
    int cnt[100000];
    int sum[100000] = {0};
    int a,b;
    
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i-1]);
        
        sum[i] = sum[i-1] + num[i-1];
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        cnt[i] = sum[b] - sum[a-1];
    }
    
    for (int i = 0; i < m; i++) printf("%d\n", cnt[i]);
    
    
    return 0;
}
