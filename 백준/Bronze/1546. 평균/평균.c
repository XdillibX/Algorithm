#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int max = 0;
    double avr = 0;
    
    scanf("%d", &n);
    int* test = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &test[i]);
        if (max < test[i]) {
            max = test[i];
        }
    }
    for (int i = 0; i < n; i++) {
        avr += (((double)test[i] / max) * 100);
    }
    printf("%f", (avr / n));
    
    free(test);
    
    return 0;
}
