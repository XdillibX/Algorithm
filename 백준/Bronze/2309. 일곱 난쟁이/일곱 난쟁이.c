#include <stdio.h>

int main(void) {
    int n[101] = {0};
    int num[9];
    int sum = 0;
    int found = 0;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        n[num[i]] = num[i];
        sum += num[i];
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j) continue;
            if (sum - num[i] - num[j] == 100) {
                n[num[i]] = 0;
                n[num[j]] = 0;
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    
    for (int i = 0; i < 101; i++) {
        if (n[i] != 0) printf("%d\n", n[i]);
    }
    
    return 0;
}
