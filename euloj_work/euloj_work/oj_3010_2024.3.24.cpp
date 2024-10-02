#include <cstdio>
#include <vector>

using namespace std;

int n, m;	// 총 학생 수, 받는 학생 수
bool check[8];
int arr[8];
int cnt;

void PrintNum(int m1) {
	if (m1 > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
		cnt++;

	}
	else {
		for (int i = 1; i <= n; i++) {
			if (check[i] == false) {
				arr[m1] = i;
				check[i] = true;
				PrintNum(m1 + 1);
				check[i] = false;

			}
		}
	}
}

int main_oj_3010() {
	scanf("%d %d", &n, &m);

	PrintNum(1);

	printf("%d", cnt);

	return 0;
}