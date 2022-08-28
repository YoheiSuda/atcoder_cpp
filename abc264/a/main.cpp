#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int L, R;
    cin >> L >> R;

    string atcoder = "atcoder";
    cout << atcoder.substr(L - 1, R - (L - 1)) << endl;
    return 0;
}
