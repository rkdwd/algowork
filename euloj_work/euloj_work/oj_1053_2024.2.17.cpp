#include <iostream>

using namespace std;

int main_oj_1053() {
	int n, even = 0, odd = 0;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.length() % 2 == 0) even++;
		else odd++;
		str.clear();
	}
	cout << even << endl << odd;

	return 0;
}