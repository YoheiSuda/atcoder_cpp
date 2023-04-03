#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> cnt(N + 1, 0);
    for (int i = 0; i < N; i++) {
        if (cnt[A[i]] == 0) {
            cnt[A[i]]++;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] > 0) {
            ans += cnt[i];
        }
    }

    cout << ans << endl;
    return 0;
}
