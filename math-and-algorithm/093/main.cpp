#include <iostream>
using namespace std;

long long GCD(long long A, long long B) {
    if (B == 0)
        return A;
    return GCD(B, A % B);
}

int main() {
    // 入力
    long long A, B;
    cin >> A >> B;

    // 最小公倍数が 10^18 を超えるかどうか判定
    if (A / GCD(A, B) > 1000000000000000000 / B) {
        cout << "Large" << endl;
    } else {
        cout << A / GCD(A, B) * B << endl;
    }
    return 0;
}