#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> maximize_operations(const vector<string> &S, int H, int W) {
    vector<string> result(S);

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W - 1; ++j) {
            if (result[i][j] == 'T' && result[i][j + 1] == 'T') {
                result[i][j] = 'P';
                result[i][j + 1] = 'C';
            }
        }
    }

    return result;
}

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; ++i) {
        cin >> S[i];
    }

    vector<string> result = maximize_operations(S, H, W);
    for (const string &row : result) {
        cout << row << endl;
    }

    return 0;
}
