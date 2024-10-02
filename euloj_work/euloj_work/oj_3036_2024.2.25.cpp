#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> arr[100000];

void ChangeTurn(int i) {
	if (arr[i].first == arr[i + 1].first) {
		ChangeTurn(i + 1);
		int tmp = arr[i].second;
		arr[i].second = arr[i + 1].second;
		arr[i + 1].second = tmp;
	}
	else return;
}

int main_oj_3036() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		arr[i] = { a + b, i + 1 };
	}

	sort(arr, arr + n, greater<pair<int, int>>());

	for (int i = 0; i < m; i++) {
		ChangeTurn(i);
		cout << arr[i].second << endl;
	}

	return 0;
}