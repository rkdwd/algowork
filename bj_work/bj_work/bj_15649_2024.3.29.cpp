#include <cstdio>
#define N 8

using namespace std;

int n, m;	// 1���� N���� �ڿ��� �߿��� �ߺ� ���� M���� �� ����
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