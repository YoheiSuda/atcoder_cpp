#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

    set<int> s;

    for (int i = 0; i < 5; i++) {
        s.insert(a[i]);
    }

    cout << s.size() << endl;
    return 0;
}