#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char fizzbuzz[9];
    int n;
    int tmp;
    
    for (int i = 0; i < 3; i++) {
        scanf("%s", fizzbuzz);
        if (atoi(fizzbuzz) != 0) {
            n = atoi(fizzbuzz);
            tmp = i;
        }
    }
    n += 3 - tmp;
    
    if (n % 3 == 0 && n % 5 == 0) {
        printf("FizzBuzz");
    }
    else if (n % 3 == 0 && n % 5 != 0) {
        printf("Fizz");
    }
    else if (n % 3 != 0 && n % 5 == 0) {
        printf("Buzz");
    }
    else {
        printf("%d", n);
    }
 
    return 0;
}
