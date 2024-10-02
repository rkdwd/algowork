#include <iostream>

using namespace std;

int main_oj_1081() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int money;
	cin >> money;

	money = 1000 - money;

	int cnt = 0;
	cnt += money / 500;
	money %= 500;
	cnt += money / 100;
	money %= 100;
	cnt += money / 50;
	money %= 50;
	cnt += money / 10;
	money %= 10;
	cnt += money / 5;
	money %= 5;
	cnt += money / 1;

	cout << cnt;


	return 0;
}