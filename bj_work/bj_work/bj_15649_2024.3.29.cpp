#include <cstdio>
#define N 8

using namespace std;

int n, m;	// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
int arr[N + 1];
bool check[N + 1];

void PrintNum(int depth/*, int n, int m, int arr[N + 1], bool check[N + 1]*/) {
	if (depth > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (check[i] == false) {
				arr[depth] = i;
				check[i] = true;
				PrintNum(depth + 1/*, n, m, arr, check*/);
				check[i] = false;
			}
		}
	}
}

int main_bj_15649() {

	scanf("%d %d", &n, &m);




	PrintNum(1/*, n, m, arr, check*/);

	return 0;
}