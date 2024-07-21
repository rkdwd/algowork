#include <iostream>
#include <map>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int n;
map<char, pair<char, char>> tree;

void preorder(char node) { // 전위
    cout << node;
    if (tree[node].first != '.') preorder(tree[node].first);
    if (tree[node].second != '.') preorder(tree[node].second);
}

void inorder(char node) { // 중위
    if (tree[node].first != '.') inorder(tree[node].first);
    cout << node;
    if (tree[node].second != '.') inorder(tree[node].second);
}

void postorder(char node) { // 후위
    if (tree[node].first != '.') postorder(tree[node].first);
    if (tree[node].second != '.') postorder(tree[node].second);
    cout << node;
}

int main_bj_1991() {
    FASTIO
        cin >> n;
    char temp, t1, t2;
    for (int i = 1; i <= n; i++) {
        cin >> temp >> t1 >> t2;
        tree[temp] = make_pair(t1, t2);
    }
    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}