#include<stdio.h>

int arr[1001];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		arr[i] = 1;
	}
	printf("<");
	int idx = 1;
	int ncount = 0, cnt = 0;
	while (1) {
		if (arr[idx] == 1) cnt++;
		if (arr[idx] == 1 && cnt == k) {
			cnt = 0;
			arr[idx] = 0;
			ncount++;
			if (ncount == n) {
				printf("%d>", idx);
				break;
			}
			printf("%d, ", idx);
		}
		idx++;
		if (idx > n) idx = idx - n;
	}
	return 0;
}