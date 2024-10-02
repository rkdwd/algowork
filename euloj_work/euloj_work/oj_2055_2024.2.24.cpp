#include <iostream>

using namespace std;

void printNum(int w, int x) {
	cout.width(w);
	cout << x << endl;
}

int main_oj_2055() {
	int a, b;
	cin >> a >> b;

	printNum(6, a);
	printNum(6, b);
	cout << "------" << endl;

	printNum(6, a * (b % 10));
	printNum(5, a * (b / 10 % 10));
	printNum(4, a * (b / 100));
	cout << "------" << endl;

	printNum(6, a * b);

	return 0;
}