#include <iostream>
using namespace std;

int A, B, Answer = 0;

// 小問題 t を解く関数
bool shou_mondai(int t) {
    int cl = (A + t - 1) / t; // A÷t の小数点以下切り上げ
    int cr = B / t;           // B÷t の小数点以下切り捨て
    if (cr - cl >= 1)
        return true;
    return false;
}

int main() {
    cin >> A >> B;
    for (int i = 1; i <= B; i++) {
        if (shou_mondai(i) == true)
            Answer = i;
    }
    cout << Answer << endl;
    return 0;
}