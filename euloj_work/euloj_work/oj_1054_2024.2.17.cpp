#include <iostream>

using namespace std;

int main_oj_1054() {
	string str;
	char ch;

	for (int i = 0; i < 5; i++) {
		cin >> str >> ch;
		for (auto& x : str) {
			x = tolower(x);
		}
		ch = tolower(ch);

		int found = str.find(ch) + 1;
		if (found != -1) cout << found << endl;
		else cout << 0 << endl;
	}

	return 0;
}