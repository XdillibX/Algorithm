#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 유클리드 호제법 이용 (최대공약수)
int Euclidean(a, b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return Euclidean(b, r);
}


int main() {
	int gcd, lcd;	// 최대공약수, 최소공배수
	int a, b;	// 입력받을 두 개의 정수
	scanf("%d %d", &a, &b);

	gcd = Euclidean(a, b);

	// 최소공배수 = a*b/최대공약수
	lcd = (a * b) / gcd;

	printf("%d\n%d", gcd, lcd);
	return 0;
}
