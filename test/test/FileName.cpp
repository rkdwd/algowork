#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int n, q;
vector<int> t, s;
set<int> s_tmp;
vector<pair<int, int>> apple;
int p;
map<int, int> results;
int cnt, max_size;

int main() {
	FASTIO;
	cin >> n >> q;
	for (int i = 0, temp; i < n; i++) cin >> temp, t.push_back(temp);
	for (int i = 0, temp; i < n; i++) cin >> temp, s.push_back(temp), s_tmp.insert(temp);

	for (int i = 0; i < n; i++) apple.push_back({ s[i], t[i] });
	sort(apple.begin(), apple.end(), greater<pair<int, int>>());

	while (q--) {
		cnt = 0;
		max_size = 0;

		cin >> p;

		if (results.find(p) != results.end()) {
			cout << results[p] << "\n";
			continue;
		}

		if (s_tmp.size() == 1) {
			if (apple[0].second >= p) {
				for (int i = 0; i < n; i++)
					if (max_size == 0)
						max_size = apple[i].first, cnt++;
					else if (apple[i].first == max_size) cnt++;
					else break;
				cout << cnt << "\n";

				results[p] = cnt;
			}
			else cout << 0 << "\n", results[p] = 0;
		}
		else {
			for (int i = 0; i < n; i++)
				if (apple[i].second >= p) {
					if (max_size == 0)
						max_size = apple[i].first, cnt++;
					else if (apple[i].first == max_size) cnt++;
					else break;
				}
			cout << cnt << "\n";

			results[p] = cnt;
		}
	}

	return 0;
}