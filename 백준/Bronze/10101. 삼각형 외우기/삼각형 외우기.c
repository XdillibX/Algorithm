#include <stdio.h>

int main(void) {
    int sum = 0;
    int n[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
        sum += n[i];
    }
    
    if (sum != 180) printf("Error");
    else {
        if ((n[0] != n[1] && n[0] != n[2]) && n[1] != n[2]) printf("Scalene");
        if (n[0] == n[1] && n[1] == n[2]) printf("Equilateral");
        else if (n[0] == n[1] || n[1] == n[2] || n[0] == n[2]) printf("Isosceles");
    }
    
    return 0;
}
