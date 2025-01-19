#include <stdio.h>
#include <stdlib.h>

typedef struct Position {
    int x;
    int y;
} POS;

POS num[100000];

int compare(const void* a, const void* b) {
    if (((POS*)a)->x == ((POS*)b)->x) return ((POS*)a)->y - ((POS*)b)->y;
    return ((POS*)a)->x - ((POS*)b)->x;
}

int main(void) {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &num[i].x, &num[i].y);
    }
    
    qsort(num, n, sizeof(POS), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", num[i].x, num[i].y);
    }
    
    return 0;
}
