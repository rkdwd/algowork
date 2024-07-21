#include <iostream>
#include <algorithm>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int n, x[1000001];
pair<int, int> t1[1000001], t2[1000001], a[1000001];

void input() {
    FASTIO
        cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
        t1[i] = make_pair(x[i], i);
    }
}

void compress() {
    sort(t1 + 1, t1 + n + 1);
    for (int i = 1, smlcnt = 0; i <= n; i++, smlcnt++) {
        t2[i] = make_pair(smlcnt, t1[i].second);
        if (t1[i].first == t1[i + 1].first) smlcnt--;
    }
}

void printCompressedX() {
    for (int i = 1; i <= n; i++) a[i] = make_pair(t2[i].second, t2[i].first);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) cout << a[i].second << " ";
}

int main_bj_18870() {
    input();
    compress();
    printCompressedX();

    return 0;
}