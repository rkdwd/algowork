#include <iostream>
#include <algorithm>

using namespace std;

int main_oj_2056() {
	string a[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	int m, n;
	cin >> m >> n;

	pair<pair<string, string>, int> b[100];
	for (int i = m; i <= n; i++) {
		if (i < 10) b[i] = { {a[i], "a"}, i };
		else b[i] = { { a[i / 10], a[i % 10] }, i };
	}

	sort(b + m, b + n + 1);

	int count = 1;
	for (int i = m; i <= n; i++) {
		cout << b[i].second << " ";
		count++;
		if (count > 10) {
			cout << endl;
			count = 1;
		}
	}

	return 0;
}