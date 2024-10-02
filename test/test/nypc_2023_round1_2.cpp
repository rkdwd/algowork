//#include <bits/stdc++.h>
//using namespace std;
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//
//int n, m;
//int word_size;
//char tag = 'l';
//vector<pair<char, string>> word[50];
//
//void update_tag(string temp) {
//    if (temp == "<CENTER>") tag = 'c';
//    else if (temp == "<RIGHT>") tag = 'r';
//    else tag = 'l';
//}
//
//void make_word_vec(string temp, int* idx) {
//    int previous = 0, current = temp.find(' ');
//    while (current != string::npos) {
//        string substring = temp.substr(previous, current - previous);
//        word[*idx].push_back(make_pair(tag, substring));
//        previous = current + 1;
//        current = temp.find(' ', previous);
//    }
//    word[*idx].push_back(make_pair(tag, temp.substr(previous, current - previous)));
//    (*idx)++;
//}
//
//void input_makeWordVec() {
//    FASTIO;
//    cin >> n >> m;
//    cin.ignore();
//    int idx = 0;
//    string temp;
//    while (n--) {
//        getline(cin, temp, '\n');
//        if (temp.substr(0, 1) == "<") update_tag(temp);
//        else make_word_vec(temp, &idx);
//    }
//    word_size = idx;
//}
//
//void case_l(int* i, int* j, int* curlen, int* next_word_len, string* next_word) {
//    while (*curlen + *next_word_len <= m) {
//        *curlen += *next_word_len;
//        cout << *next_word;
//        if (*curlen < m) {
//            cout << "-";
//            (*curlen)++;
//        }
//        (*j)++;
//        if (*j >= word[*i].size()) break;
//        *next_word_len = word[*i][*j].second.length();
//        *next_word = word[*i][*j].second;
//    }
//    for (int k = *curlen + 1; k <= m; k++) cout << "-";
//    cout << "\n";
//}
//
//void case_r(int* i, int* j, int* curlen, int* next_word_len, string* next_word) {
//    queue<string> q;
//    while (*curlen + *next_word_len <= m) {
//        *curlen += *next_word_len;
//        q.push(*next_word);
//        if (*curlen < m) {
//            q.push("-");
//            (*curlen)++;
//        }
//        (*j)++;
//        if (*j >= word[*i].size()) break;
//        *next_word_len = word[*i][*j].second.length();
//        *next_word = word[*i][*j].second;
//    }
//    for (int k = *curlen + 1; k <= m; k++) cout << "-";
//    int q_size = q.size();
//    if (q.back() == "-") {
//        cout << q.back();
//        q_size--;
//    }
//    for (int k = 0; k < q_size; k++) {
//        cout << q.front();
//        q.pop();
//    }
//    cout << "\n";
//}
//
//void case_c(int* i, int* j, int* curlen, int* next_word_len, string* next_word) {
//    queue<string> q;
//    while (*curlen + *next_word_len <= m) {
//        *curlen += *next_word_len;
//        q.push(*next_word);
//        if (*curlen < m) {
//            q.push("-");
//            (*curlen)++;
//        }
//        (*j)++;
//        if (*j >= word[*i].size()) break;
//        *next_word_len = word[*i][*j].second.length();
//        *next_word = word[*i][*j].second;
//    }
//    *curlen = m - *curlen;
//    if(q.back() == "-") (*curlen)++;
//    cout << *curlen << " " << *curlen / 2 << "\n";
//    for (int k = 1; k < *curlen / 2; k++) cout << "-";
//    int q_size = q.size();
//    if (q.back() == "-") {
//        cout << q.back();
//        q_size--;
//    }
//    for (int k = 0; k < q_size; k++) {
//        cout << q.front();
//        q.pop();
//    }
//    for (int k = *curlen / 2 + 1; k <= *curlen; k++) cout << "-";
//    cout << "\n";
//}
//
//void solve() {
//    for (int i = 0; i < word_size; i++) {
//        for (int j = 0; j < word[i].size(); ) {
//            int curlen = 0;
//            int next_word_len = word[i][j].second.length();
//            string next_word = word[i][j].second;
//            if (word[i][j].first == 'l') case_l(&i, &j, &curlen, &next_word_len, &next_word);
//            else if (word[i][j].first == 'r') case_r(&i, &j, &curlen, &next_word_len, &next_word);
//            else case_c(&i, &j, &curlen, &next_word_len, &next_word);
//        }
//    }
//}
//
//int main() {
//    input_makeWordVec();
//    solve();
//
//    return 0;
//}