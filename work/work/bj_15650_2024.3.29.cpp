#include <cstdio>
#define N 8

using namespace std;

int n, m;
int arr[N + 1];
bool check[N + 1];

void PrintNum(int depth, int k) {
	if (depth > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (int i = k; i <= n; i++) {
			if (check[i] == false) {
				arr[depth] = i;
				check[i] = true;
				PrintNum(depth + 1, i + 1);
				check[i] = false;
			}
		}
	}
}

int main_bj_15650() {
	scanf("%d %d", &n, &m);

	PrintNum(1, 1);

	return 0;
}