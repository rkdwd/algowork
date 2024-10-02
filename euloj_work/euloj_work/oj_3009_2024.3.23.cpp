#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;

void PrintNum(vector<int> icm, int dis, int n, int m) {
	for (int i = 1; i <= m; i++) {	// 3
		icm[n - dis] = i;

		if (dis != 0) PrintNum(icm, dis - 1, n, m);
		else {
			for (int j = 1; j <= n; j++) cout << icm[j] << " ";
			cout << "\n";
			cnt++;
		}
	}
}

int main_oj_3009() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> icm(n + 1);

	PrintNum(icm, n - 1, n, m);

	cout << cnt;

	return 0;
}