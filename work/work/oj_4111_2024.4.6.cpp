#include <cstdio>
#include <algorithm>
#define MAX 1000000

using namespace std;

int cnt[MAX];

int main_oj_4111() {
	int n;
	scanf("%d", &n);

	cnt[1] = 0;
	for (int i = 2; i <= n; i++) {
		cnt[i] = cnt[i - 1] + 1;
		if (i % 2 == 0) cnt[i] = min(cnt[i], cnt[i / 2] + 1);
		if (i % 3 == 0) cnt[i] = min(cnt[i], cnt[i / 3] + 1);
	}

	printf("%d", cnt[n]);

	return 0;
}