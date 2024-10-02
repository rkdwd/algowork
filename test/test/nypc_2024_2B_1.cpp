//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n;
//int a[100001];
//long long ans = 0;
//bool check[100001] = { 0 };
//
//int main() {
//	FASTIO;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = n; i >= 1; i--) {
//		if (a[i] <= n && !check[a[i]]) check[a[i]] = 1;
//		else ans += i;
//	}
//
//	cout << ans;
//
//	return 0;
//}