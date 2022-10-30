#include <iostream>
using namespace std;

int main() {
    // 入力
    int N, X;
    cin >> N >> X;

    // すべての (a, b, c) の組み合わせを試す
    int answer = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            for (int c = b + 1; c <= N; c++) {
                if (a + b + c == X) {
                    answer += 1;
                }
            }
        }
    }

    // 答えを出力
    cout << answer << endl;

    return 0;
}