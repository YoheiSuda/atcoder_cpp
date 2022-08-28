#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int y;
    cin >> y;
    int mod4 = y % 4;

    if (mod4 == 2) {
        cout << y << endl;
    } else {
        switch (mod4) {
        case 0:
            cout << y + 2 << endl;
            break;
        case 1:
            cout << y + 1 << endl;
            break;
        case 3:
            cout << y + 3 << endl;
            break;
        }
    }

    return 0;
}
