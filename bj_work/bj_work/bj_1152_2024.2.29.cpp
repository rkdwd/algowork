#include <iostream>
#include <string>

using namespace std;

int main_bj_1152() {
	string str;
	getline(cin, str);

	if (str.front() == ' ') str.erase(0, 1);
	if (str.back() == ' ') str.erase(str.end() - 1);

	if (str.empty()) {
		cout << 0;
		return 0;
	}

	int count = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str.substr(i, 1) == " ") count++;
	}

	cout << count;

	return 0;
}