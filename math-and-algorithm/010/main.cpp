#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    long long Answer = 1;

    for (int i = 0; i < N; i++) {
        Answer *= (N - i);
    }

    cout << Answer << endl;
}