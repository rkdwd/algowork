//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n;
//vector<int> a(1);
//int ans = 0;
//queue<pair<int, int>> q;
//
//int main() {
//	FASTIO;
//	cin >> n;
//	for (int i = 1, temp; i <= n; i++)
//		cin >> temp, a.push_back(temp);
//
//	for (int i = 1; i <= n; i++)
//		for (int j = i + 1; j <= n; j++) {
//			ans++;
//			ans %= 1000000007;
//			q.push({ i, j });
//		}
//
//	while (!q.empty()) {
//		for (int i = q.front().second + 1; i <= n; i++)
//			if (a[q.front().second] - a[i] == a[q.front().first] - a[q.front().second]) {
//				ans++;
//				ans %= 1000000007;
//				q.push({ q.front().second, i });
//			}
//		q.pop();
//	}
//
//	cout << ans;
//
//	return 0;
//}