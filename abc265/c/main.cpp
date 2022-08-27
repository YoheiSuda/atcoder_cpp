#include <bits/stdc++.h>
using namespace std;

string finish(int currentY, int currentX) {
    string Answer =
        "" + to_string(currentY + 1) + " " + to_string(currentX + 1);
    return Answer;
}

int main() {
    // メモ：無限ループ =
    // 一度来た場所にもう一度来たかどうかを確認する処理が必要？

    int H, W;

    cin >> H >> W;

    char G[H][W];
    bool checkedPoints[H][W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> G[i][j];
            checkedPoints[i][j] = false;
        }
    }

    // ここから処理
    int currentY = 0;
    int currentX = 0;

    while (true) {
        switch (G[currentY][currentX]) {
        case 'U':
            if (checkedPoints[currentY][currentX]) {
                cout << -1 << endl;
                return 0;
            }
            if (currentY == 0) {
                string Answer = finish(currentY, currentX);
                cout << Answer << endl;
                return 0;
            }
            checkedPoints[currentY][currentX] = true;
            currentY -= 1;

            break;
        case 'D':
            if (checkedPoints[currentY][currentX]) {
                cout << -1 << endl;
                return 0;
            }
            if (currentY == (H - 1)) {
                string Answer = finish(currentY, currentX);
                cout << Answer << endl;
                return 0;
            }
            checkedPoints[currentY][currentX] = true;
            currentY += 1;
            break;
        case 'L':
            if (checkedPoints[currentY][currentX]) {
                cout << -1 << endl;
                return 0;
            }
            if (currentX == 0) {
                string Answer = finish(currentY, currentX);
                cout << Answer << endl;
                return 0;
            }
            checkedPoints[currentY][currentX] = true;
            currentX -= 1;
            break;
        case 'R':
            if (checkedPoints[currentY][currentX]) {
                cout << -1 << endl;
                return 0;
            }
            if (currentX == (W - 1)) {
                string Answer = finish(currentY, currentX);
                cout << Answer << endl;
                return 0;
            }
            checkedPoints[currentY][currentX] = true;
            currentX += 1;
            break;
        }
    }

    return 0;
}