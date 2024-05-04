#include <cstdio>

using namespace std;

bool primeNum[1000];
int arr[4];
bool finish;

void FindPrime() {
	bool isPrime;
	for (int i = 2; i < 1000; i++) {
		isPrime = true;
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) primeNum[i] = true;
	}
}

void Find(int depth, int n) {
	if (depth > 3) {
		if (n == 0) {
			for (int i = 1; i <= 3; i++) printf("%d ", arr[i]);
			printf("\n");
			finish = true;
		}
	}
	else {
		for (int i = 2; i < 1000; i++) {
			if (finish) break;
			if (primeNum[i] == true) {
				arr[depth] = i;
				Find(depth + 1, n - i);
			}
		}
	}
}

int main_bj_11502() {
	int t;
	scanf("%d", &t);

	FindPrime();

	int n;
	for (int i = 1; i <= t; i++) {
		scanf("%d", &n);
		finish = false;
		Find(1, n);
		if (!finish) printf("0\n");
	}

	return 0;
}