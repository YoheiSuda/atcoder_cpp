#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, X, Y;

    cin >> N >> X >> Y;
    if (abs(X) + abs(Y) <= N) {
        if (N % 2 == 0 && (X + Y) % 2 == 0) {
            cout << "Yes" << endl;
            return 0;
        }

        if (N % 2 != 0 && (X + Y) % 2 != 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}