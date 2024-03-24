#include <cstdio>
#include <vector>

using namespace std;

void PrintChar(int k, int n, vector<char> ch) {
	if (n == 0) return;

	if (k == n) {
		printf("%c", ch[n]);
		return;
	}

	for (int i = k; i <= n; i++) {
		printf("%c, ", ch[i]);
		PrintChar(i + 1, n, ch);
	}

}

int main_test() {
	int n;
	scanf("%d", &n);

	vector<char> ch(n + 1);
	for (int i = 1; i <= n; i++) scanf("%c", &ch[i]);

	for (int i = 0; i <= n; i++) {
		printf("%d :", i);
		printf(" {");
		for (int j = 1; j <= n; j++) PrintChar(i, j, ch);
		printf("}\n");
	}

	return 0;
}