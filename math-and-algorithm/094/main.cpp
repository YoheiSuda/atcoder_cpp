#include <algorithm>
#include <iostream>
using namespace std;

int N, B[109];

int main() {
    // 入力
    cin >> N;
    for (int i = 1; i <= N - 1; i++) {
        cin >> B[i];
    }

    // 数列 A の要素の合計を求める → 答えの出力
    int answer = B[1] + B[N - 1];
    for (int i = 2; i <= N - 1; i++) {
        answer += min(B[i - 1], B[i]);
    }
    cout << answer << endl;

    return 0;
}