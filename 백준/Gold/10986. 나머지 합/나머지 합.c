#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll cnt[1001];

int main()
{
	int N, M;
	ll result;
	ll tmp;
	ll* arr;
	scanf("%d %d", &N, &M);

	arr = (ll*)calloc(N+1, sizeof(ll));

	for (int i = 1; i <= N; i++) {
		scanf("%lld", &arr[i]);
		arr[i] += arr[i - 1];
		arr[i] %= M;
		cnt[arr[i]]++;
	}

	result = cnt[0];
	
	for (int i = 0; i < M; i++) {
		tmp = cnt[i];
		result += tmp * (tmp - 1) / 2;
	}

	printf("%lld", result);

	free(arr);

	return 0;
}