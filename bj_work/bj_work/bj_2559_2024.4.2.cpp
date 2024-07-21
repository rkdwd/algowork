#include <cstdio>
#define N 100000

using namespace std;

int arr[N + 1];

int main_bj_2559() {
	int n, k; // 전체 날짜 수, 합을 구할 연속적인 날짜 수
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);

	int max, sum = 0;
	for (int i = 1; i <= k; i++) sum += arr[i];
	max = sum;
	for (int i = k + 1; i <= n; i++) {
		sum = sum - arr[i - k] + arr[i];
		if (sum > max) max = sum;
	}

	printf("%d", max);

	return 0;
}