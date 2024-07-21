#include <iostream>

using namespace std;

int main_oj_1092() {
	int n;
	string str;
	cin >> n >> str;

	str.erase(n - 1, 1);
	if (str.empty()) cout << -1;
	else cout << str;

	return 0;
}