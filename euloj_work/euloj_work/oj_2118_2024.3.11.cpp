#include <iostream>

using namespace std;

int ans[4] = { 0, 1, 0, 0 };

void Swap(int n, int k) {
	int tmp = ans[n];
	ans[n] = ans[k];
	ans[k] = tmp;
}

int main_oj_2118() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	while (!str.empty()) {
		if (str.front() == 'A') Swap(1, 2);
		else if (str.front() == 'B') Swap(2, 3);
		else Swap(1, 3);
		str.erase(0, 1);
	}

	for (int i = 1; i <= 3; i++) {
		if (ans[i] == 1) {
			cout << i;
			break;
		}
	}

	return 0;
}