#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // l1からr1がl2,r2全体を含む
    if (l1 <= l2 && r1 >= r2) {
        cout << r1 - l1 << endl;
        return 0;
    }

    // l
}
