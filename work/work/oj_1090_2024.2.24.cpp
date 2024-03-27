#include <iostream>
#include <algorithm>

using namespace std;

int main_oj_1090() {
	pair<int, int> a[8];

	for (int i = 0; i < 8; i++) {
		int k;
		cin >> k;
		a[i] = { k,i + 1 };
	}

	sort(a, a + 8, greater<pair<int, int>>());

	int sum = 0, b[5];

	for (int i = 0; i < 5; i++) {
		sum += a[i].first;
		b[i] = a[i].second;
	}
	cout << sum << endl;

	sort(b, b + 5);

	for (int i = 0; i < 5; i++) {
		cout << b[i] << " ";
	}

	return 0;
}