//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n, q;
//string str;
//
//int query(int idx, char tribe, int s, int e) {
//	str[idx - 1] = tribe;
//
//	stack<char> stack1, stack2;
//	int cnt1 = 0, cnt2 = 0;
//	for (int i = s - 1; i < e; i++) {
//		if (!stack1.empty() && ((stack1.top() == 'e' && str[i] == 'g') || (stack1.top() == 'g' && str[i] == 'e'))) cnt1++;
//		else stack1.push(str[i]);
//	}
//	for (int i = e - 1; i >= s - 1; i--) {
//		if (!stack2.empty() && ((stack2.top() == 'e' && str[i] == 'g') || (stack2.top() == 'g' && str[i] == 'e'))) cnt2++;
//		else stack2.push(str[i]);
//	}
//	return min(cnt1, cnt2);
//}
//
//int main() {
//	FASTIO;
//	cin >> n >> q >> str;
//
//	int idx, s, e;
//	char tribe;
//	while (q--) {
//		cin >> idx >> tribe >> s >> e;
//		cout << query(idx, tribe, s, e) << "\n";
//	}
//
//	return 0;
//}