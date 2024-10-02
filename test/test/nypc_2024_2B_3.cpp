//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n;
//vector<pair<pair<int, int>, int>> v1, v2;
//long long score_x, score_y;
//long long cnt1 = 0, cnt2 = 0;
//vector<pair<int, int>> v1pair, v2pair;
//
//int main() {
//	FASTIO;
//	cin >> n;
//	for (int i = 1, x, y; i <= n; i++) {
//		cin >> x >> y;
//		v1.push_back({ { x, y }, i });
//		v2.push_back({ { y, x }, i });
//	}
//
//	sort(v1.begin(), v1.end());
//	sort(v2.begin(), v2.end());
//
//	for (int i = 0; i < n - i - 1; i++) {
//		score_x = abs(v1[n - i - 1].first.first - v1[i].first.first);
//		score_y = abs(v1[n - i - 1].first.second - v1[i].first.second);
//		cnt1 += score_x + score_y;
//		v1pair.push_back({ v1[i].second, v1[n - i - 1].second });
//	}
//	for (int i = 0; i < n - i - 1; i++) {
//		score_x = abs(v2[n - i - 1].first.first - v2[i].first.first);
//		score_y = abs(v2[n - i - 1].first.second - v2[i].first.second);
//		cnt2 += score_x + score_y;
//		v2pair.push_back({ v2[i].second, v2[n - i - 1].second });
//	}
//
//	if (cnt1 > cnt2) {
//		cout << cnt1 << "\n";
//		for (pair<int, int> p : v1pair)
//			cout << p.first << " " << p.second << "\n";
//	}
//	else {
//		cout << cnt2 << "\n";
//		for (pair<int, int> p : v2pair)
//			cout << p.second << " " << p.first << "\n";
//	}
//
//	return 0;
//}