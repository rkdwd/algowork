#include <cstdio>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	vector<int> fib(n + 1);
	fib[0] = 0, fib[1] = 1;
	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	printf("%d", fib[n]);

	return 0;
}