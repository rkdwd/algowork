#include <iostream>
#include <algorithm>
#define N 1000000

using namespace std;

int x[N], a[N];

int main_18870() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 좌표 개수 입력
	int n;
	cin >> n;

	// 좌표 입력
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		a[i] = x[i];
	}

	// a[] 정렬
	sort(a, a + n);

	// a[]에서 중복 값 N+1로 바꾸기
	int dis = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - dis]) {
			a[i] = N + 1;
			dis++;
		}
		else dis = 1;

	}

	// a[] 다시 정렬
	sort(a, a + n);

	// 좌표 압축값 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (x[i] == a[j]) {
				cout << j << " ";
				break;
			}
		}
	}

	return 0;
}