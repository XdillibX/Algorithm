#include <stdio.h>

int stack[1000000];
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
    int mode;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &mode);
        if (mode == 1) {
            scanf("%d", &n);
            push(n);
        }
        else {
            if (mode == 2) pop();
            else if (mode == 3) size();
            else if (mode == 4) empty();
            else if (mode == 5) top();
        }
    }
    
    return 0;
}
