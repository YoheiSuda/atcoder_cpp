#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;

    cin >> N;

    // √Nまでの値で割る数と商を列挙すれば良い
    for (long long i = 1; i * i <= N; i++) {
        if (N % i != 0)
            continue;

        cout << i << endl;

        if (i != N / i) {
            cout << N / i << endl;
        }
    }
    return 0;
}