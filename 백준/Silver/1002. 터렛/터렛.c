#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main(void) {
	int x1, y1, r1, x2, y2, r2;
	int n;
	double length;
	int comp;
	int rm, rM;

	scanf("%d", &n);
	
	int* count = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		 
		rm = r1 >= r2 ? r2 : r1;
		rM = r1 >= r2 ? r1 : r2;

		length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		comp = r1 + r2;

		if (length == 0) {
			if (r1 == r2) count[i] = -1;
			else count[i] = 0;
		}
		else  {
			if (length < rM) {
				if (length + rm < rM) {
					count[i] = 0;
				}
				else if (length + rm == rM) {
					count[i] = 1;
				}
				else if (length + rm > rM) {
					count[i] = 2;
				}
			}
			else {
				if (length > comp) count[i] = 0;
				else if (length < comp) count[i] = 2;
				else if (length = comp) count[i] = 1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) printf("%d\n", count[i]);

	free(count);

	return 0;
}