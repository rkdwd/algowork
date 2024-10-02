#include <iostream>
#include <algorithm>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int n;
int amtOfHoney[100001], sum[100001];
int ans, tmp;

void input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> amtOfHoney[i];
        sum[i] = sum[i - 1] + amtOfHoney[i];
    }
}

void findMaxAmtOfHoney() {
    // 国(1) - 国(i) - 曹烹(n)
    for (int i = 2; i < n; i++) {
        tmp = (sum[n] - amtOfHoney[1] - amtOfHoney[i]) + (sum[n] - sum[i]);
        ans = max(tmp, ans);
    }

    // 曹烹(1) - 国(i) - 国(n)
    for (int i = n - 1; i > 1; i--) {
        tmp = (sum[n - 1] - amtOfHoney[i]) + sum[i - 1];
        ans = max(tmp, ans);
    }

    // 国(1) - 曹烹(i) - 国(n)
    for (int i = 2; i < n; i++) {
        tmp = (sum[i] - amtOfHoney[1]) + (sum[n - 1] - sum[i - 1]);
        ans = max(tmp, ans);
    }

    cout << ans;
}

int main_bj_21758() {
    FASTIO
        input();
    findMaxAmtOfHoney();

    return 0;
}