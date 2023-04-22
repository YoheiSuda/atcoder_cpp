#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int a = x1 - x2, b = x1 - x3, c = x2 - x3;
        if ((a % 14 == 0 && b % 14 == 0 && c % 14 == 0) && (a / 14 == b / 14 || a / 14 == c / 14 || b / 14 == c / 14)) {
            cout << abs(a / 14) << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
