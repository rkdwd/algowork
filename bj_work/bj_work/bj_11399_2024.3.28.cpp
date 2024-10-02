#include <cstdio>
#include <algorithm>
#define N 1000

using namespace std;

int main_bj_11399() {
	int n;
	scanf("%d", &n);

	int parr[N + 1];
	for (int i = 1; i <= n; i++) scanf("%d", &parr[i]);

	sort(parr + 1, parr + n + 1);

	int tarr[N + 1];
	tarr[1] = parr[1];
	for (int i = 2; i <= n; i++) tarr[i] = tarr[i - 1] + parr[i];

	int sum = 0;
	for (int i = 1; i <= n; i++) sum += tarr[i];

	printf("%d", sum);
	
	return 0;
}