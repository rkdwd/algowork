#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main_oj_4085() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> s(n + 1);
	for (int i = 1; i <= n; i++) cin >> s[i];

	sort(s.begin(), s.end());

	int x = n % 2 == 0 ? s[n / 2] : s[(n + 1) / 2];

	int dij = 0;
	for (int i = 1; i <= n; i++) {
		int dis = x - s[i];
		dij += dis >= 0 ? dis : -1 * dis;
	}

	cout << dij;

	return 0;
}