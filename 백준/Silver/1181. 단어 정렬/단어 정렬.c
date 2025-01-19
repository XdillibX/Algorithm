#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    if (strlen((const char*)a) > strlen((const char*)b)) return 1;
    else if (strlen((const char*)a) < strlen((const char*)b)) return -1;
    else return strcmp((char*)a, (char*)b);
}

char str[20000][51];

int main(void) {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    
    qsort(str, n, sizeof(str[0]), compare);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(str[i], str[i+1]) != 0 || i == n - 1) printf("%s\n", str[i]);
    }
    
    return 0;
}