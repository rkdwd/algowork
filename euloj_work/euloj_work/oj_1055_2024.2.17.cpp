#include <iostream>

using namespace std;

int main_oj_1055() {
	int n, found = 0;
	string str;
	char ch;
	cin >> n >> ch;

	for (int i = 0; i < n; i++) {
		cin >> str;
		for (auto& x : str) {
			x = tolower(x);
		}
		ch = tolower(ch);

		if (str.front() == ch) {
			cout << str << endl;
			found++;
		}
	}
	if (found == 0) cout << "NOT FOUND";

	return 0;
}