#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> a[50000];

int main_oj_3094() {
	int t, n;
	cin >> t >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = { x < 0 ? x * -1 : x, x };
	}

	sort(a, a + n);

	int i = 0, sum = 0, count = -1, k = 0;
	while (sum + k <= t) {
		sum += k;
		if (i == 0) k = a[i].first;
		else {
			if ((a[i].second < 0 && a[i - 1].second < 0) || (a[i].second > 0 && a[i - 1].second > 0)) k = a[i].first - a[i - 1].first;
			else k = a[i].first + a[i - 1].first;
		}
		count++;
		i++;
	}

	cout << count;

	return 0;
}