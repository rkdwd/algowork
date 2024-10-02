#include <iostream>

using namespace std;

int main_oj_1060() {
	int koi = 0, ioi = 0;
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str.substr(i, 3) == "KOI") koi++;
		else if (str.substr(i, 3) == "IOI") ioi++;
	}
	cout << koi << endl << ioi << endl;

	return 0;
}