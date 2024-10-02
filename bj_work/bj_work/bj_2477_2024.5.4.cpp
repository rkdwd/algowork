#include <cstdio>
#include <algorithm>

using namespace std;

int main_bj_2477() {
    int k;
    scanf("%d", &k);

    pair<int, int> line[12];
    int x, y;
    for (int i = 0; i < 6; i++) {
        scanf("%d %d", &x, &y);
        line[i] = { x,y };
        line[i + 6] = line[i];
    }

    bool check[6];
    int S = 1;
    for (int i = 0; i < 9; i++) {
        if (line[i].first == line[i + 2].first && line[i + 1].first == line[i + 3].first) {
            for (int j = i; j <= i + 3; j++) check[j % 6] = true;
            for (int j = 0; j < 6; j++) if (check[j] == false) S *= line[j].second;
            S -= line[i + 1].second * line[i + 2].second;
            break;
        }
    }

    printf("%d", S * k);

    return 0;
}