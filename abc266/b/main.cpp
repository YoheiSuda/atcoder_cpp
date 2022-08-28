#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 998244353

int main() {
    ll n;
    cin >> n;

    ll n2 = n % mod;

    if (n2 < 0) {
        cout << mod + n2 << endl;
    } else {
        cout << n2 << endl;
    }

    return 0;
}
