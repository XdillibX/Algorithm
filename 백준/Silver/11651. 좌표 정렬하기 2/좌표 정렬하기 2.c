#include <stdio.h>
#include <stdlib.h>

typedef struct POS {
    int x;
    int y;
} Position;

Position p[100000];

int compare(const void* a, const void* b) {
    if (((Position*)a)->y == ((Position*)b)->y) return ((Position*)a)->x - ((Position*)b)->x;
    return ((Position*)a)->y - ((Position*)b)->y;
}

int main(void) {
    int N;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    qsort(p, N, sizeof(p[0]), compare);
    
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", p[i].x, p[i].y);
    }
    
    return 0;
}
