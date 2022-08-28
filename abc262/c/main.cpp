#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll count = 0;
    ll sameCount = 0;

    for (ll i = 1; i <= n; i++) {
        // indexと値が同じ場合（後で組み合わせの計算をする）
        if (a[i] == i) {
            sameCount++;
            continue;
        }
        //互い違いの場合の組み合わせ（一つずつしか存在しない）
        if (a[a[i]] == i) {
            count++;
        }
    }

    count /= 2;

    count += (sameCount * (sameCount - 1)) / 2;

    cout << count << endl;

    return 0;
}