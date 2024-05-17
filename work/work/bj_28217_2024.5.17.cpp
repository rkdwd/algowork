#include <cstdio>
#include <algorithm>

using namespace std;

int n, cntDif, ans = 100, A[6][10][10], B[10][10];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &A[0][i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &B[i][j]);
}

void rotate() {
    for (int i = 1; i < 3; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k <= j; k++)
                A[i][j][k] = A[i - 1][n - (j + 1) + k][(n - (j + 1))];
}

void mirror() {
    for (int i = 3; i < 6; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k <= j; k++)
                A[i][j][k] = A[i - 3][j][j - k];
}

void check() {
    for (int i = 0; i < 6; i++) {
        cntDif = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k <= j; k++) {
                if (A[i][j][k] != B[j][k]) {
                    cntDif++;
                    if (cntDif >= ans) break;
                }
            }
        }
        ans = min(ans, cntDif);
    }
}

void solve() {
    rotate();
    mirror();
    check();
    printf("%d", ans);
}

int main_bj_28217() {
    input();
    solve();

    return 0;
}