#include <iostream>
#include <algorithm>

using namespace std;

int main_oj_1064() {
	int n;
	string str[101];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> str[i];

	for (int i = 0; i < n; i++) {
		if ((str[i].front() == 'a') || (str[i].front() == 'e') || (str[i].front() == 'i') || (str[i].front() == 'o') || (str[i].front() == 'u')) {
			cout << str[i] << "euler" << endl;
		}
		else {
			cout << str[i].substr(1) << str[i].front() << "edu" << endl;
		}
	}

	return 0;
}