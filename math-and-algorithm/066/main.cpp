#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // 入力
    int N, K;
    cin >> N >> K;

    // 事象 B の個数 yojishou を数える → 答えの出力
    long long yojishou = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = max(1, a - (K - 1)); b <= min(N, a + (K - 1)); b++) {
            for (int c = max(1, a - (K - 1)); c <= min(N, a + (K - 1)); c++) {
                if (abs(b - c) <= K - 1)
                    yojishou += 1;
            }
        }
    }
    cout << (long long)N * N * N - yojishou << endl;
    return 0;
}