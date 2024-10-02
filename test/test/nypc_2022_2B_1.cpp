//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int T;
//long long k, l, r;
//vector<tuple<long long, long long, long long>> c;
//long long maxK = 0;
//vector<string> bitstr;
//
//void input() {
//	FASTIO;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> k >> l >> r;
//		c.push_back(make_tuple(k, l, r));
//		maxK = max(maxK, get<0>(c.back()));
//	}
//}
//
//string flip(string str) {	
//	for (long long i = 0; i < str.size(); i++) {
//		if (str[i] == '0') str[i] = '1';
//		else str[i] = '0';
//	}
//	return str;
//}
//
//void make_bitstr() {
//	bitstr.push_back("0");
//	for (long long i = 1; i <= maxK; i++) {
//		if (i % 2 == 1) bitstr.push_back(flip(bitstr[i - 1]) + bitstr[i - 1]);
//		else {
//			string tmp = bitstr[i - 1];
//			reverse(tmp.begin(), tmp.end());
//			bitstr.push_back(tmp + bitstr[i - 1]);
//		}
//	}
//}
//
//long long cnt_1(tuple<long long, long long, long long> t) {
//	long long cnt = 0;
//	long long idx = get<0>(t), s = get<1>(t) - 1, e = get<2>(t);
//	for (long long i = s; i < e; i++)
//		if (bitstr[idx][i] == '1') cnt++;
//	return cnt;
//}
//
//void print_ans() {
//	for (tuple<long long, long long, long long>& t : c)
//		cout << cnt_1(t) << "\n";
//}
//
//int main() {
//	input();
//	make_bitstr();
//	print_ans();
//
//	return 0;
//}