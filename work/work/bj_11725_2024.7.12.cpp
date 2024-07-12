#include <iostream>
#include <vector>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cin.tie(nullptr);

using namespace std;

int n;
vector<int> e[100001];
int parent[100001];
bool found[100001];

void input() {
    FASTIO
        cin >> n;
    for (int i = 0, t1, t2; i < n; i++) {
        cin >> t1 >> t2;
        e[t1].push_back(t2);
        e[t2].push_back(t1);
    }
}

void findParent(int node) {
    found[node] = 1;
    for (int n : e[node]) {
        if (!found[n]) {
            parent[n] = node;
            findParent(n);
        }
    }
}

void printParent() {
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << "\n";
    }
}

int main_bj_11725() {
    input();
    findParent(1);
    printParent();

    return 0;
}