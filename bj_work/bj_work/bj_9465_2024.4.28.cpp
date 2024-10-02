#include <cstdio>
#include <algorithm>

using namespace std;

int main_bj_9465() {
    int t;
    scanf("%d", &t);

    int n, stickers[2][100001], maxS[2][100001];

    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < 2 * n; i++)
            scanf("%d", &stickers[i / n][i % n + 1]);

        maxS[0][0] = 0, maxS[1][0] = 0;
        maxS[0][1] = stickers[0][1], maxS[1][1] = stickers[1][1];

        for (int i = 2; i <= n; i++) {
            maxS[0][i] = stickers[0][i] + max(maxS[1][i - 1], maxS[1][i - 2]);
            maxS[1][i] = stickers[1][i] + max(maxS[0][i - 1], maxS[0][i - 2]);
        }

        printf("%d\n", max(maxS[0][n], maxS[1][n]));
    }

    return 0;
}