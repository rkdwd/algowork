#include <cstdio>
#include <algorithm>

using namespace std;

int main_bj_1931() {
    int n;
    scanf("%d", &n);

    pair<int, int> time[100000];
    int b, e;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &b, &e);
        time[i] = { e,b };
    }

    sort(time, time + n);

    int l = 0, ans = 1;
    for (int i = 1; i < n; i++) {
        if (time[i].second >= time[l].first) {
            l = i;
            ans++;
        }
    }

    printf("%d", ans);

    return 0;
}