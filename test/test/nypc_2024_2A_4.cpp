//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n, m;
//int D[150001];
//set<int> N[150001];
//map<int, string> M;
//bool check[150001];
//
//void input() {
//    FASTIO;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> D[i];
//    for (int i = 1, u, v; i < n; i++) {
//        cin >> u >> v;
//        N[u].insert(v);
//        N[v].insert(u);
//    }
//}
//
//void make_num(int s, int e, int n, string str) {
//    string tmp = str + to_string(D[s]);
//    if (s == e) {
//        if (M.find(n) == M.end()) M.insert({ n, tmp });
//        else if (tmp.length() < M[n].length()) M.insert({ n, tmp });
//    }
//    else {
//        for (int i : N[s]) {
//            if (!check[i]) {
//                check[i] = 1;
//                make_num(i, e, n, tmp);
//                check[i] = 0;
//            }
//        }
//    }
//}
//
//void solve() {
//    string str;
//    for (int i = 1, s, e; i <= m; i++) {
//        cin >> s >> e;
//        make_num(s, e, i, str);
//    }
//
//    vector<pair<int, int>> M2;
//    for (map<int, string>::iterator it = M.begin(); it != M.end(); it++) {
//        M2.push_back({ stoi(it->second), it->first });
//    }
//    sort(M2.begin(), M2.end());
//
//    for (pair<int, int> p : M2)
//        cout << "{ " << p.first << ", " << p.second << " } ";
//    cout << "\n";
//
//    for (pair<int, int> p : M2) cout << p.second << "\n";
//}
//
//int main() {
//    input();
//    solve();
//
//    return 0;
//}
//
