#include <iostream>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    ll count = 0;
    while (b) {
        a %= b;
        swap(a, b);
        count++;
    }

    return count;
}

ll operation_count(ll a, ll b) {
    if (a == b) {
        return 0;
    }

    return gcd(a, b);
}

int main() {
    ll A, B;
    cin >> A >> B;
    A %= MOD;
    B %= MOD;

    cout << operation_count(A, B) << endl;
    return 0;
}
