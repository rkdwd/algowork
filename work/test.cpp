#include <cstdio>
#include <vector>

using namespace std;

void PrintSet(int n, vector<char> ch) {
	if (n == 0) return;


	for (int i = 1; i <= n; i++) {
		GetSet(i, n);
	}

}

char GetSet(int k, int n) {
	if(k==n) return

	for (int i = k + 1; i <= n; i++) {

	}
}

int main() {
	int n;
	scanf("%d", &n);

	vector<char> ch(n + 1);
	for (int i = 1; i <= n; i++) scanf("%d", &ch[i]);

	for (int i = 0; i <= n; i++) {
		printf("0 :");
		printf(" {");
		PrintSet(i, ch);
		printf("}");
	}

	return 0;
}