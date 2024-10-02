#include <cstdio>
#define N 2000

using namespace std;

int n, arr[N + 1];
bool isP[N + 1][N + 1];
int m, s, e;

void Input() {
	scanf("%d", &n); // ���� ���� �Է�
	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]); // �� �Է�
}

void Output() {
	scanf("%d", &m); // ������ ���� �Է�
	for (int i = 1; i <= m; i++) { // ���� �Է�, �� ���
		scanf("%d %d", &s, &e);
		printf("%d\n", isP[s][e]);
	}
}

void Palindrome() {
	// �縰����� �κ� ��� ã��
	for (int i = 1; i <= n; i++) isP[i][i] = true; // ���̰� 1�ΰ��
	for (int i = 1; i <= n - 1; i++) if (arr[i] == arr[i + 1]) isP[i][i + 1] = true; // ���̰� 2�ΰ��

	// ���̰� 3 �̻��� ���
	int dis = 2;
	for (int i = n - 2; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (arr[j] == arr[j + dis] && isP[j + 1][j + dis - 1] == true) {
				isP[j][j + dis] = true;
			}
		}
		dis++;
	}
}

int main_bj_10942() {
	Input();

	Palindrome();

	Output();

	return 0;
}