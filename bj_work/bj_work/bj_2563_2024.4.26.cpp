#include <cstdio>
#define LEN 100

using namespace std;

bool drawP[LEN][LEN];

void Attach(int x, int y) {
	for (int i = y; i < y + 10; i++) {
		for (int j = x; j < x + 10; j++) {
			if (drawP[j][i] == false) {
				drawP[j][i] = true;
			}
		}
	}
}

int main_bj_2563() {
	int n;
	scanf("%d", &n);

	int x, y;
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		Attach(x, y);
	}

	int cnt = 0;
	for (int i = 0; i < LEN; i++) {
		for (int j = 0; j < LEN; j++) {
			if (drawP[i][j] == true) cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}
