#include <stdio.h>

typedef struct PEOPLE {
    int h;
    int w;
    int n;
} Peo;

int main(void) {
    int N;
    int cnt = 0;
    Peo person[50];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &person[i].w, &person[i].h);
    }
    
    for (int i = 0; i < N; i++) {
        cnt = 1;
        for (int j = 0; j < N; j++) {
            if (person[i].h < person[j].h && person[i].w < person[j].w) {
                cnt++;
            }
        }
        person[i].n = cnt;
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", person[i].n);
    }
    
    return 0;
}
