#include <cstdio>

using namespace std;

int bingo[5][5], lines = 0;
bool check[5][5];

int getPos(int num) {
    int i = 0;
    while (i < 25) {
        if (bingo[i / 5][i % 5] == num) {
            check[i / 5][i % 5] = 1;
            break;
        }
        i++;
    }
    return i;
}

void cntLines(int x, int y) {
    // ¡æ
    if (check[x][0] == 1 && check[x][1] == 1 && check[x][2] == 1 && check[x][3] == 1 && check[x][4] == 1) {
        lines++;
    }

    // ¡é
    if (check[0][y] == 1 && check[1][y] == 1 && check[2][y] == 1 && check[3][y] == 1 && check[4][y] == 1) {
        lines++;
    }

    // ¢Ù
    if (x == y && check[0][0] == 1 && check[1][1] == 1 && check[2][2] == 1 && check[3][3] == 1 && check[4][4] == 1) {
        lines++;
    }

    // ¢×
    if (x + y == 4 && check[0][4] == 1 && check[1][3] == 1 && check[2][2] == 1 && check[3][1] == 1 && check[4][0] == 1) {
        lines++;
    }
}

int main_bj_2578() {
    for (int i = 0; i < 25; i++) scanf("%d", &bingo[i / 5][i % 5]);

    int num;
    for (int i = 0; i < 25; i++) {
        scanf("%d", &num);

        int pos = getPos(num);
        cntLines(pos / 5, pos % 5);
        if (lines >= 3) {
            printf("%d", i + 1);
            break;
        }
    }

    return 0;
}