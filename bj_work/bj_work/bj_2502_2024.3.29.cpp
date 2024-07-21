#include <cstdio>
#include <algorithm>
#define N 30

using namespace std;

int main_bj_2502() {
	int d, k;
	scanf("%d %d", &d, &k);

	int a[N + 1], b[N + 1];
	a[1] = 1, a[2] = 0;
	b[1] = 0, b[2] = 1;
	for (int i = 3; i <= d; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}

	for (int i = 1; ; i++) {
		int tmp = k - a[d] * i;
		if (tmp % b[d] == 0) {
			printf("%d\n%d", i, tmp / b[d]);
			break;
		}
	}

	return 0;
}