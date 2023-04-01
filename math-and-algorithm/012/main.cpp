#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long N;

    cin >> N;

    // long long checkPrimeMax = (long long)std::floor(std::sqrt(N));

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}