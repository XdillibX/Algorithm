#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else return -1;
}

int arith(int num[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (num[i]);
    }

    return round(sum / n);
}

int median(int num[], int n) {
    if (n == 1) return num[0];
    else return num[(n + 1) / 2 - 1];
}

int Mode(int num[], int n) {
    int arr[8001] = {0};
    int max = 0;
    int idx = 0;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        arr[num[i] + 4000]++;
    }
    for (int i = 0; i < 8001; i++) {
        if (arr[i] == 0) continue;
        if (max <= arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < 8001; i++) {
        if (arr[i] == 0) continue;
        if (max == arr[i]) {
            idx = i;
            cnt++;
        }
        if (cnt == 2) {
            max = i - 4000;
            return max;
        }
    }
    return idx - 4000;
}

int range(int num[], int n) {
    return num[n - 1] - num[0];
}

int main(void) {
    int n;
    int num[500000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    qsort(num, n, sizeof(num[0]), compare);

    printf("%d\n", arith(num, n));
    printf("%d\n", median(num, n));
    printf("%d\n", Mode(num, n));
    printf("%d\n", range(num, n));
    
    return 0;
}
