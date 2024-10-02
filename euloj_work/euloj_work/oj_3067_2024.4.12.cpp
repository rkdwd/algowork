#include <cstdio>
#define K 13

using namespace std;

int k, nums[K], arr[7];

void Input() {
	scanf("%d", &k);
	for (int i = 1; i <= k; i++) scanf("%d", &nums[i]);
}

void Output() {
	for (int i = 1; i <= 6; i++) printf("%d ", arr[i]);
	printf("\n");
}

void Core(int depth, int min) {
	if (depth > 6) Output();
	else {
		for (int i = min; i <= k; i++) {
			arr[depth] = nums[i];
			Core(depth + 1, i + 1);
		}
	}
}

int main_oj_3067() {
	Input();

	Core(1, 1);

	return 0;
}