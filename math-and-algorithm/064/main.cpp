#include <iostream>
using namespace std;

int N, K, A[59];
int sum = 0; // A[1] + A[2] + ... + A[N] の値

int main() {
    // 入力 → 数列の要素の総和 sum を求める
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= N; i++)
        sum += A[i];

    // 答えの出力
    if (sum % 2 != K % 2)
        cout << "No" << endl;
    else if (sum > K)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}