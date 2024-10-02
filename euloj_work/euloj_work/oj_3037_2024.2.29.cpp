#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

pair<int, pair<int, int>> citizen[50000];

int main_oj_3037() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int h, m, s;
		cin >> h >> m >> s;
		citizen[i] = { h, {m, s} };
	}

	sort(citizen, citizen + n);

	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", citizen[i].first, citizen[i].second.first, citizen[i].second.second);
	}

	return 0;
}