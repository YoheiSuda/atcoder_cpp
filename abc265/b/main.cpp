#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M, T;
    cin >> N >> M >> T;

    long long A[N - 1];

    long long X[M];

    long long Y[M];

    for (long long i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

    for (long long i = 0; i < M; i++) {
        cin >> X[i] >> Y[i];
    }

    // ここから実際の処理

    long long XIndex = 0;

    for (long long i = 0; i < N - 1; i++) {
        T -= A[i];
        if (T <= 0) {
            cout << "No" << endl;
            return 0;
        }

        if (M > 0 && (X[XIndex] - 2) == i) {
            T += Y[XIndex];
            XIndex += 1;
            M -= 1;
        }
    }

    cout << "Yes" << endl;
    return 0;
}