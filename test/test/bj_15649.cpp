#include <cstdio>

using namespace std;

int n, m;
bool check[8];
int arr[8];

void PrintNum(int m1) {
	if (m1 > m) {
		for (int i = 1; i <= m; i++) printf("%d ", arr[i]);
		printf("\n");
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

int main() {
	scanf("%d %d", &n, &m);

	PrintNum(1);

	return 0;
}