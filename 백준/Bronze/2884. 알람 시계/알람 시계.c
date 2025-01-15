#include <stdio.h>

int main(void) {
    int hour, min;
    scanf("%d %d", &hour, &min);
    
    if (min >= 45) min -= 45;
    else {
        hour -= 1;
        min = min + 60 - 45;
    }
    if (hour == -1) hour = 23;
    
    printf("%d %d", hour, min);
    
    return 0;
}
