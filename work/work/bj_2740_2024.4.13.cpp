#include <cstdio>
#define N 100
#define M 100
#define K 100

using namespace std;

int n, m, k;
int A[N + 1][M + 1], B[M + 1][K + 1], C[M + 1][M + 1];

void Input() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d %d", &m, &k);
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= k; j++) {
			scanf("%d", &B[i][j]);
		}
	}
}

void Output() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}

void Core() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			for (int l = 1; l <= m; l++) {
				C[i][j] += A[i][l] * B[l][j];
			}
		}
	}
	Output();
}

int main_bj_2740() {
	Input();

	Core();

	return 0;
}