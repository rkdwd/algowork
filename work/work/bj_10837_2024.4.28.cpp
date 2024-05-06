#include <cstdio>

using namespace std;

int main_bj_10837() {
    int k;
    scanf("%d", &k);

    int c;
    int m, n;
    scanf("%d", &c);
    for (int i = 1; i <= c; i++) {
        scanf("%d %d", &m, &n);

        if (m == n) printf("1\n");
        else if (m<n && k - (n - 1) + m > n - 1) printf("1\n");
        else if (m > n && k - (m - 1) + 1 + n > m - 1) printf("1\n");
        else printf("0\n");
    }


    return 0;
}