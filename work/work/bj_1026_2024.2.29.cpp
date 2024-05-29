#include <iostream>
#include <algorithm>

using namespace std;

int main_bj_1026() {
	int n, a[50], b[50];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	sort(a, a + n);
	sort(b, b + n, greater<>());

	int sum = 0;
	for (int i = 0; i < n; i++) sum += a[i] * b[i];

	cout << sum;

	return 0;
}