#include <cstdio>
#include <vector>

using namespace std;

int main_oj_2113() {
	int c, n;
	scanf("%d%d", &c, &n);

	vector<int> vec(n);
	for (int i = 0; i < n; i++) scanf("%d", &vec[i]);

	int size = vec.size();
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (vec[i] + vec[j] == c) {
				printf("%d %d", i + 1, j + 1);
				break;
			}
		}
	}


	return 0;
}