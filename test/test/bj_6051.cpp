//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int N;
//map<int, vector<int>> query;
//vector<int> l;
//
//void input() {
//    FASTIO;
//    cin >> N;
//}
//
//void solve() {
//    char order;
//    int k;
//    for (int q = 1; q <= N; q++) {
//        cin >> order;
//        if (order == 's') {
//            if (l.empty()) cout << "-1\n";
//            else {
//                l.pop_back();
//                cout << (l.empty() ? -1 : l.back()) << "\n";
//            }
//        }
//        else if (order == 'a') {
//            cin >> k;
//            l.push_back(k);
//            cout << k << "\n";
//        }
//        else {
//            cin >> k;
//            if (k - 1 <= 0) cout << "-1\n";
//            else {
//                l = query[k - 1];
//                cout << (l.empty() ? -1 : l.back()) << "\n";
//            }
//        }
//        query.insert({ q, l });
//    }
//}
//
//int main() {
//    input();
//    solve();
//
//    return 0;
//}