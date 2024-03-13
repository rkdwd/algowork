#include <cstdio>
#include <vector>

using namespace std;

int ans = 0;
void Find(vector<int> gk, vector<int> gs, int s) {
	if (gs[s] != 0) {
		gs[s] = 0;
		ans++;
	}

	
}

int main_17610() {
	int k;
	scanf("%d", &k);	// 1

	vector<int> gk(k + 1);
	int s = 0;
	for (int i = 1; i <= k; i++) {
		scanf("%d", &gk[i]);	// 2
		s += gk[i];	// 3
	}

	vector<int> gs(s + 1);
	for (int i = 1; i <= s; i++) gs[i] = i;	// 4

	Find(gk, gs, s);

	printf("%d", s - ans);


	return 0;
}