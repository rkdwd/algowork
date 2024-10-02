#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int n, m;
int box[1001][1001];
int dy[4] = { -1, 1, 0, 0 }, dx[4] = { 0, 0, -1, 1 };
int days[1001][1001];
queue<pair<int, int>> q;

void input() {
	FASTIO;
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1) q.push(make_pair(i, j));
		}
}

void ripe() {
	while (!q.empty()) {
		int cur_y = q.front().first;
		int cur_x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_y = cur_y + dy[i];
			int next_x = cur_x + dx[i];
			if (box[next_y][next_x] == 0 && (1 <= next_y && next_y <= n) && (1 <= next_x && next_x <= m)) {
				box[next_y][next_x] = 1;
				days[next_y][next_x] = days[cur_y][cur_x] + 1;
				q.push(make_pair(next_y, next_x));
			}
		}
	}
}

bool box_check() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (box[i][j] == 0) return false;
	return true;
}

int getAns() {
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			ans = max(ans, days[i][j]);
	return ans;
}

int main_bj_7576() {
	input();
	ripe();
	if (!box_check()) cout << -1;
	else cout << getAns();

	return 0;
}