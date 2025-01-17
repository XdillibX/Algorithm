#include <stdio.h>
#include <string.h>

void add(int num[], int n) {
    num[n - 1] = n;
}
void remove1(int num[], int n) {
    for (int i = 0; i < 20; i++) {
        if (num[i] == n) {
            num[i] = 0;
        }
    }
}
void check(int num[], int n) {
    for (int i = 0; i < 20; i++) {
        if (num[i] == n) {
            printf("%d\n", 1);
            return;
        }
    }
    printf("%d\n", 0);
}
void toggle(int num[], int n) {
    for (int i = 0; i < 20; i++) {
        if (num[i] == n) {
            num[i] = 0;
            return;
        }
    }
    num[n-1] = n;
}
void all(int num[]) {
    for (int i = 0; i < 20; i++) {
        num[i] = i+1;
    }
}
void empty(int num[]) {
    for (long i = 0; i < 20; i++) {
        num[i] = 0;
    }
}

int main(void) {
    long M;
    int n;
    int num[20] = {0};
    char str[7];
    
    scanf("%ld", &M);
    
    for (long i = 0; i < M; i++) {
        scanf("%s", str);
        if (strcmp(str, "all") == 0) {
            all(num);
        }
        else if (strcmp(str, "empty") == 0) {
            empty(num);
        }
        else {
            scanf("%d", &n);
            if (strcmp(str, "add") == 0) {
                add(num, n);
            }
            else if (strcmp(str, "remove") == 0) {
                remove1(num, n);
            }
            else if (strcmp(str, "check") == 0) {
                check(num, n);
            }
            else if (strcmp(str, "toggle") == 0) {
                toggle(num, n);
            }
        }
    }
    
    return 0;
}
