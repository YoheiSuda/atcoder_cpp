#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N;
    long long X;
    cin >> N >> X;
    vector<long long> A(N);
    unordered_set<long long> nums;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        nums.insert(A[i]);
    }

    bool found = false;
    for (int i = 0; i < N; i++) {
        if (nums.count(A[i] - X) > 0) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
