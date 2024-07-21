#include <iostream>

using namespace std;

int main_oj_1056() {
	int n, found = 0;
	string str, ch;
	cin >> n >> ch;

	for (int i = 0; i < n; i++) {
		cin >> str;
		for (auto& x : str) {
			x = tolower(x);
		}
		for (auto& y : ch) {
			y = tolower(y);
		}

		if (str.substr(0, ch.length()) == ch) {
			cout << str << endl;
			found++;
		}
	}
	if (found == 0) cout << "NOT FOUND";

	return 0;
}