#include <stdio.h>
#include <string.h>

int stack[10000];
int cnt = 0;

void push(int n) {
    stack[cnt++] = n;
}

void pop(void) {
    if (stack[cnt - 1] != 0) {
        printf("%d\n", stack[cnt - 1]);
        stack[cnt--] = 0;
    }
    else {
        puts("-1");
    }
}

void size(void) {
    printf("%d\n", cnt);
}

void empty(void) {
    if (cnt == 0) puts("1");
    else puts("0");
}

void top(void) {
    if (stack[cnt - 1] != 0) {
        printf("%d\n", stack[cnt - 1]);
    }
    else {
        puts("-1");
    }
}

int main(void) {
    int N;
    int n;
    char mode[6];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", mode);
        if (strcmp(mode, "push") == 0) {
            scanf("%d", &n);
            push(n);
        }
        else {
            if (strcmp(mode, "pop") == 0) pop();
            else if (strcmp(mode, "size") == 0) size();
            else if (strcmp(mode, "empty") == 0) empty();
            else if (strcmp(mode, "top") == 0) top();
        }
    }
    
    return 0;
}
