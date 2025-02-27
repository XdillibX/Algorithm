// 이진탐색 - 재귀함수
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    if (*(int*)a >= *(int*)b) return 1;
    else return -1;
}

int isExist(int num[], int key, int low, int high) {
    int mid;
    if (low > high) return 0;
    mid = (low + high) / 2;
    
    if (key == num[mid]) return 1;
    else if (key > num[mid]) return isExist(num, key, mid+1, high);
    else return isExist(num, key, low, mid-1);
}

int main(void) {
    int N, M;
    int num1[100000];
    int num2[100000];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num1[i]);
    }
    
    qsort(num1, N, sizeof(int), compare);
    
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &num2[i]);
    }
    
    for (int i = 0; i < M; i++) {
        if (isExist(num1, num2[i], 0, N-1)) puts("1");
        else puts("0");
    }
    
    return 0;
}

/*
이진탐색 - 반복문

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    if (*(int*)a >= *(int*)b) return 1;
    else return -1;
}

int isExist(int num[], int n, int key) {
    int low, high;
    int mid;
    
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if (key == num[mid]) return 1;
        else if (key < num[mid]) high = mid - 1;
        else if (key > num[mid]) low = mid + 1;
    }
    return 0;
}

int main(void) {
    int N, M;
    int num1[100000];
    int num2[100000];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num1[i]);
    }
    
    qsort(num1, N, sizeof(int), compare);
    
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &num2[i]);
    }
    
    for (int i = 0; i < M; i++) {
        if (isExist(num1, N, num2[i])) puts("1");
        else puts("0");
    }
    
    return 0;
}
*/
