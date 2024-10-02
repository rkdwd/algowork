#include <iostream>

using namespace std;

int main_bj_2525() {
	int h, m, t;
	cin >> h >> m >> t;

	int cook = h * 60 + m + t;

	cout << (cook / 60) % 24 << " " << cook % 60;

	return 0;
}