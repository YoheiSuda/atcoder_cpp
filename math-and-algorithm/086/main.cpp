#include <iostream>
#include <string>
using namespace std;

int N, depth = 0;
string S;

int main() {
    // 入力
    cin >> N >> S;

    // '(' の数 - ')' の数を depth とする
    // 途中で depth が負になったらこの時点で No
    for (int i = 0; i < N; i++) {
        if (S[i] == '(')
            depth += 1;
        if (S[i] == ')')
            depth -= 1;
        if (depth < 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 最後、depth = 0 ['(' と ')' の数が同じ] かどうかで場合分け
    if (depth == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}