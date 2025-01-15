#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char OX[81];
    int n;
    int score;
    int seq;
    
    scanf("%d", &n);
    
    for (int j = 0; j < n; j++) {
        score = 0;
        seq = 0;
        scanf("%s", OX);
        for (int i = 0; i < strlen(OX); i++) {
            if (OX[i] == 'O' && seq == 0) {
                seq = 1;
                score += seq;
            }
            else if (OX[i] == 'O' && seq != 0) {
                seq++;
                score += seq;
            }
            else if (OX[i] == 'X') {
                seq = 0;
            }
        }
        printf("%d\n", score);
    }
    
    return 0;
}