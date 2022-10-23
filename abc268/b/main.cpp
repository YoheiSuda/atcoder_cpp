#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    string t;

    cin >> s;
    cin >> t;

    if (t.size() >= s.size() && equal(begin(s), end(s), begin(t))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}