#include <cstdio>
#define N 2000

using namespace std;

int n, arr[N + 1];
bool isP[N + 1][N + 1];
int m, s, e;

void Input() {
	scanf("%d", &n); // 수의 개수 입력
	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]); // 수 입력
}

void Output() {
	scanf("%d", &m); // 질문의 개수 입력
	for (int i = 1; i <= m; i++) { // 질문 입력, 답 출력
		scanf("%d %d", &s, &e);
		printf("%d\n", isP[s][e]);
	}
}

void Palindrome() {
	// 펠린드롬인 부분 모두 찾기
	for (int i = 1; i <= n; i++) isP[i][i] = true; // 길이가 1인경우
	for (int i = 1; i <= n - 1; i++) if (arr[i] == arr[i + 1]) isP[i][i + 1] = true; // 길이가 2인경우

	// 길이가 3 이상인 경우
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