#include <cstdio>

using namespace std;

int cnt = 0;

void CountThree(int i) {
	if (i < 10 && i != 3) return;
	if (i % 10 == 3) cnt++;
	CountThree(i/10);
}

int main_ad() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) CountThree(i);

	printf("%d", cnt);

	return 0;
}