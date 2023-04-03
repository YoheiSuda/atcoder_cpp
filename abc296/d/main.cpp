#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long X = -1;

    for (long long a = 1; a * a <= M; a++) {
        if (M % a == 0) {
            long long b = M / a;
            if (a <= N && b <= N) {
                if (X == -1 || X > a * b) {
                    X = a * b;
                }
            }
        }
    }

    cout << X << endl;
    return 0;
}
