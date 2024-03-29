#include <cstdio>
#include <algorithm>
#define N 30

using namespace std;

int main() {
	// d, k 입력
	int d, k;
	scanf("%d %d", &d, &k);

	// D번째 날의 A의 계수와 B의 계수 구하기
	int a[N + 1], b[N + 1];
	a[1] = 1, a[2] = 0;
	b[1] = 0, b[2] = 1;
	for (int i = 3; i <= d; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}

	// (A의계수)*A + (B의계수)*B = K
	// K - (A의계수)*A = (B의계수)*B
	// { K - (A의계수)*A } / (B의계수) = B
	// { K - (A의계수)*A } % (B의계수) == 0 일때  B는 자연수
	for (int i = 1; ; i++) {
		int tmp = k - a[d] * i;
		if (tmp % b[d] == 0) {
			printf("%d\n%d", i, tmp / b[d]);
			break;
		}
	}

	// B부터 넣고 A 넣은 다음 K값과 같은지 확인
	// 시간 초과
	/*int cake[N + 1];
	for (int b = 1; ; b++) {
		for (int a = b; a >= 1; a--) {
			cake[1] = a, cake[2] = b;
			for (int i = 3; i <= d; i++) cake[i] = cake[i - 1] + cake[i - 2];
			if (cake[d] == k) {
				printf("%d\n%d", a, b);
				exit(0);
			}
		}
	}*/

	return 0;
}