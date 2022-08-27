#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;

    long long Answer = 0;

    bool isYOtoku = false;
    if (X * 3 > Y) {
        isYOtoku = true;
    }

    if (isYOtoku) {
        cout << (N / 3) * Y + (N % 3) * X << endl;
    } else {
        cout << N * X << endl;
    }

    return 0;
}