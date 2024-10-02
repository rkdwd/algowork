#include <cstdio>
#include <algorithm>
#define R 25

using namespace std;

int r;
int pins[R + 1][R + 1] = { 0, };
int scores[R + 1][R + 1] = { 0, };

void Input() {
	scanf("%d", &r);
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &pins[i][j]);
		}
	}
}

void Core() {
	for (int i = 2; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) scores[i][j] = pins[i][j] + scores[i - 1][j];
			else if (j == i) scores[i][j] = pins[i][j] + scores[i - 1][j - 1];
			else scores[i][j] = max(scores[i - 1][j - 1] + pins[i][j], scores[i - 1][j] + pins[i][j]);
		}
	}

	int max = scores[r][1];
	for (int i = 2; i <= r; i++) if (scores[r][i] > max) max = scores[r][i];
	printf("%d", max);
}

int main_oj_3104() {
	Input();

	scores[1][1] = pins[1][1];
	Core();

	return 0;
}