#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int good = 0;
    int bad = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'o') {
            good++;
        } else if (S[i] == 'x') {
            bad++;
        }
    }

    if (good >= 1 && bad == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
