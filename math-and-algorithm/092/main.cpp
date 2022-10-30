#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // 入力
    long long N;
    cin >> N;

    // 縦の長さを 1 から √N まで全探索
    long long answer = (1LL << 60);
    for (long long x = 1; x * x <= N; x++) {
        if (N % x == 0) {
            answer = min(answer, 2 * x + 2 * (N / x));
        }
    }

    // 答えを出力
    cout << answer << endl;

    return 0;
}