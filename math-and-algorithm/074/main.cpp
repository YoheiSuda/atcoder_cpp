#include <iostream>
using namespace std;

long long N, A[200009], Answer = 0;

int main() {
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    // 答えを求める → 答えの出力
    for (int i = 1; i <= N; i++)
        Answer += A[i] * (-N + 2LL * i - 1LL);
    cout << Answer << endl;
    return 0;
}