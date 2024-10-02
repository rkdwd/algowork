#include <cstdio>
#define N 8

using namespace std;

int n, m;
int arr[N + 1];
int cnt = 0;

void PrintNum(int depth, int k) {
	if (depth > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
		cnt++;
	}
	else {
		for (int i = k; i <= n; i++) {
			arr[depth] = i;
			PrintNum(depth + 1, i);
		}
	}
}

int main_oj_3011() {
	scanf("%d %d", &n, &m);

	PrintNum(1, 1);
	printf("%d", cnt);

	return 0;
}