#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

    int first_double_click = -1;
    for (int i = 1; i < N; ++i) {
        if (T[i] - T[i - 1] <= D) {
            first_double_click = T[i];
            break;
        }
    }

    cout << first_double_click << endl;

    return 0;
}
