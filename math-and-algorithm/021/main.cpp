#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, r;
    cin >> n >> r;

    ll ans = 1;
    for (int i = 0; i < r; i++) {
        ans *= n - i;
        ans /= i + 1;
    }

    cout << ans << endl;
}