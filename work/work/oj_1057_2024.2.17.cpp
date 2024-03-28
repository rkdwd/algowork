#include <iostream>
#include <algorithm>

using namespace std;

int main_oj_1057() {
	int n;
	string str[101];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
		for (auto& x : str[i]) {
			x = tolower(x);
		}
	}

	sort(str, str + n);

	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;
	}

	return 0;
}