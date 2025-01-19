#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    int age;
    char name[101];
    int num;
} PS;

PS user[100000];

int compare(const void* a, const void* b) {
    if (((PS*)a)->age == ((PS*)b)->age) return ((PS*)a)->num - ((PS*)b)->num;
    return ((PS*)a)->age - ((PS*)b)->age;
}

int main(void) {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &user[i].age, user[i].name);
        user[i].num = i;
    }
    
    qsort(user, n, sizeof(PS), compare);
   
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", user[i].age, user[i].name);
    }
    
    return 0;
}