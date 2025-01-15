#include <stdio.h>

int main(void) {
    int h, m, t;
    
    scanf("%d %d %d", &h, &m, &t);
    
    if (m + t >= 60) {
        h += (m + t) / 60;
        m = (m + t) % 60;
    }
    else {
        m += t;
    }
    if (h >= 24) h -= 24;
    
    
    
    printf("%d %d", h, m);
    
    return 0;
}
