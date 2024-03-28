#include <iostream>

using namespace std;

int main_oj_1114() {
	int n;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.length() > 10) cout << str.front() << str.length() - 2 << str.back() << endl;
		else cout << str << endl;
	}

	return 0;
}