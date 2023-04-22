#include <iostream>
#include <string>
using namespace std;

bool check_conditions(const string &S) {
    int k_pos = -1;
    int r_pos[2] = {-1, -1};
    int b_pos[2] = {-1, -1};
    int r_count = 0, b_count = 0;

    for (int i = 0; i < 8; ++i) {
        if (S[i] == 'K') {
            k_pos = i;
        } else if (S[i] == 'R') {
            r_pos[r_count++] = i;
        } else if (S[i] == 'B') {
            b_pos[b_count++] = i;
        }
    }

    if ((b_pos[0] % 2 != b_pos[1] % 2) && (r_pos[0] < k_pos && k_pos < r_pos[1])) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string S;
    cin >> S;

    if (check_conditions(S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
