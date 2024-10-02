#include <cstdio>

using namespace std;

int cntmin = 10000000;

void Get1(int n, int cnt) {
	if (n == 1) {
		cntmin = cnt;
		return;
	}

	if (cnt + 1 > cntmin) return;

	if (n % 3 == 0) Get1(n / 3, cnt + 1);
	if (n % 2 == 0) Get1(n / 2, cnt + 1);
	Get1(n - 1, cnt + 1);
}

int main_bj_1463() {
	int n;
	scanf("%d", &n);

	Get1(n, 0);
	printf("%d", cntmin);

	return 0;
}