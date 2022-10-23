#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    if (s == "Monday") {
        cout << 5 << endl;
        return 0;
    }

    if (s == "Tuesday") {
        cout << 4 << endl;
        return 0;
    }

    if (s == "Wednesday") {
        cout << 3 << endl;
        return 0;
    }

    if (s == "Thursday") {
        cout << 2 << endl;
        return 0;
    }

    if (s == "Friday") {
        cout << 1 << endl;
        return 0;
    }
}
