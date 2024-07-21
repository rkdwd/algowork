#include <iostream>

using namespace std;

int main_oj_1079() {
	string str;
	cin >> str;

	for (int i = 0; ; i++) {
		char maxch = '0';
		for (auto& ch : str) {
			if (('A' <= ch) && (ch <= 'Z') && (maxch < ch)) {
				maxch = ch;
			}
		}
		if (maxch == '0') break;
		str.erase(str.find(maxch), 1);
		cout << str << endl;
	}

	return 0;
}