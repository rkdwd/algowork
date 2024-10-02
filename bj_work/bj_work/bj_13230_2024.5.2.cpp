#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string S, T, subS, subT;
int Slen, S0, S1, SQM, T0, T1, cntChange, ans;

void CntST01QM() {
    for (int i = 0; i < Slen; i++) {
        subS = S.substr(i, 1), subT = T.substr(i, 1);

        if (subS == "0") S0++;
        else if (subS == "1") S1++;
        else SQM++;

        if (subT == "0") T0++;
        else if (subT == "1") T1++;
    }
}

void ChangeQM() {
    for (int i = 0; i < Slen; i++) {
        if (S.substr(i, 1) == "?") {
            if (T.substr(i, 1) == "0") {
                if (S0 < T0) {
                    S.replace(i, 1, "0");
                    S0++;
                }
                else {
                    S.replace(i, 1, "1");
                    S1++;
                }
            }
            else {
                if (S1 < T1) {
                    S.replace(i, 1, "1");
                    S1++;
                }
                else {
                    S.replace(i, 1, "0");
                    S0++;
                }
            }
            ans++;
            SQM--;
        }
        if (SQM == 0) break;
    }
}

void Change01() {
    for (int i = 0; i < Slen; i++) {
        if (S.substr(i, 1) == "0") {
            if (T.substr(i, 1) == "1") {
                S.replace(i, 1, "1");
                S1++;
                S0--;
                ans++;
            }
        }
        if (S1 == T1) break;
    }
}

void Move01() {
    for (int i = 0; i < Slen; i++) {
        subS = S.substr(i, 1), subT = T.substr(i, 1);
        if (subS != subT) {
            if (subS == "0" && subT == "1") S.replace(i, 1, "1");
            else if (subS == "1" && subT == "0") S.replace(i, 1, "0");
            cntChange++;
        }
    }
    ans += cntChange / 2;
}

int main_bj_13230() {
    int c;
    scanf("%d", &c);

    for (int i = 1; i <= c; i++) {
        cin >> S >> T;

        Slen = S.length(), S0 = 0, S1 = 0, SQM = 0, T0 = 0, T1 = 0;
        cntChange = 0, ans = 0;

        printf("Case %d: ", i);
        CntST01QM();
        if (SQM > 0) ChangeQM();
        if (S1 < T1) Change01();
        if (S0 != T0) {
            printf("-1\n");
            continue;
        }
        if (S != T) Move01();
        printf("%d\n", ans);
    }

    return 0;
}