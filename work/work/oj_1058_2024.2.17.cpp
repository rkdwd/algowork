#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main_oj_1058() {
	string n;
	cin >> n;

	reverse(n.begin(), n.end());

	for (int i = 3; i <= n.length(); i += 4) {
		n.insert(i, ",");
	}

	if (n.back() == ',') n.erase(n.length() - 1);
	reverse(n.begin(), n.end());
	cout << n;

	return 0;
}