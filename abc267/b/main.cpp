#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    bool pins[7] = {true, true, true, true, true, true, true};

    for (ll i = 0; i < s.size(); i++) {
        // pin1が倒れてなければだめ
        if (i == 0 && s[i] != '0') {
            cout << "No" << endl;
            return 0;
        }

        switch (i) {
        case 4:
            if (s[i] == '0' && s[0] == '0') {
                pins[3] = false;
            }
            break;

        case 7:
            if (s[i] == '0' && s[1] == '0') {
                pins[2] = false;
            }
            break;

        case 8:
            if (s[i] == '0' && s[2] == '0') {
                pins[4] = false;
            }
            break;

        case 3:
            if (s[i] == '0') {
                pins[1] = false;
            }
            break;

        case 5:
            if (s[i] == '0') {
                pins[5] = false;
            }
            break;

        case 6:
            if (s[i] == '0') {
                pins[0] = false;
            }
            break;

        case 9:
            if (s[i] == '0') {
                pins[6] = false;
            }
            break;
        }
    }

    bool isL = false;
    bool canSplit = false;

    for (ll i = 0; i < 7; i++) {
        if (pins[i] && canSplit) {
            cout << "Yes" << endl;
            return 0;
        }

        if (i != 6 && !pins[i] && isL) {
            canSplit = true;
        }

        if (pins[i]) {
            isL = true;
        }
    }

    cout << "No" << endl;
    return 0;
}
