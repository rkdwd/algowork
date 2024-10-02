#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main_bj_13335() {
    int n, w, L;
    scanf("%d %d %d", &n, &w, &L);

    vector<int> truck(n);
    vector<pair<int, int>> bridge;
    for (int i = 0; i < n; i++) scanf("%d", &truck[i]);

    int time = 0, weight;
    while (!truck.empty() || !bridge.empty()) {
        for (auto& truck : bridge) truck.first--;
        if (!bridge.empty() && bridge.front().first == 0) bridge.erase(bridge.begin());

        weight = 0;
        for (auto& truck : bridge) weight += truck.second;
        if (!truck.empty() && bridge.size() < w && weight + truck.front() <= L) {
            bridge.push_back({ w, truck.front() });
            truck.erase(truck.begin());
        }

        time++;
    }

    printf("%d", time);

    return 0;
}