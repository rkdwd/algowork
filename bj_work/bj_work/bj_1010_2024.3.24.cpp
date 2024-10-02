#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m, i, j, k;
	unsigned long long ans;
	
	cin >> t;

	for (i = 1; i <= t; i++) {
		cin >> n >> m;

		ans = 1, k = 1;
		for (j = m; j > m - n; j--) {
			ans *= j;
			ans /= k;
			k++;
		}

		cout << ans << "\n";
	}

	return 0;
}