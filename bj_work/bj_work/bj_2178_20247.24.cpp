#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int n, m;
int maze[101][101];
int dy[4] = { -1, 1, 0, 0 }, dx[4] = { 0, 0, -1, 1 };
queue<pair<int, int>> q;
int dist[101][101];

void input() {
	FASTIO;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;
		for (int j = 1; j <= m; j++) {
			maze[i][j] = str[j - 1] - '0';
		}
	}
}

void getOutOfMaze(int start_y, int start_x) {
	maze[start_y][start_x] = -1;
	q.push(make_pair(start_y, start_x));
	dist[start_y][start_x] = 1;

	while (!q.empty()) {
		int cur_y = q.front().first;
		int cur_x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_y = cur_y + dy[i];
			int next_x = cur_x + dx[i];
			if (maze[next_y][next_x] == 1) {
				maze[next_y][next_x] = -1;
				dist[next_y][next_x] = dist[cur_y][cur_x] + 1;
				q.push(make_pair(next_y, next_x));
			}
		}
	}
}

int main_bj_2178() {
	input();
	getOutOfMaze(1, 1);
	cout << dist[n][m];

	return 0;
}