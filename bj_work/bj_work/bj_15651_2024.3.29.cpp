#include <cstdio>
#define N 8

using namespace std;

int n, m;
int arr[N + 1];

void PrintNum(int depth) {
	if (depth > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			arr[depth] = i;
			PrintNum(depth + 1);
		}
	}
}

int main_bj_15651() {
	scanf("%d %d", &n, &m);

	PrintNum(1);

	return 0;
}