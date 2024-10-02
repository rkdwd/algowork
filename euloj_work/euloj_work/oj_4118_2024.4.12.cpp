#include <cstdio>
#define DIV 1000000000
#define N 250

using namespace std;

int n;
long long cases[N + 1] = { 1,1, };

long long Core() {
	for (int i = 2; i <= n; i++) cases[i] = (cases[i - 2] * 2 + cases[i - 1]) % DIV;
	return cases[n];
}

int main_oj_4118() {
	scanf("%d", &n);

	long long ans = Core();

	printf("%lld", ans);

	return 0;
}