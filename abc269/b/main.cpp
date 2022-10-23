#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> s(10);

    for (size_t i = 0; i < 10; i++) {
        cin >> s[i];
    }

    bool first = false;
    bool xEnd = false;
    bool yEnd = false;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (size_t i = 0; i < 10; i++) {
        for (size_t j = 0; j < 10; j++) {
            if (s[i][j] == '#' && !first) {
                first = true;
                a = i + 1;
                c = j + 1;
            }
            if (j > 0 && s[i][j - 1] == '#' && s[i][j] == '.' && !xEnd) {
                xEnd = true;
                d = j;
            }
            if (j == 9 && s[i][j] == '#' && !xEnd) {
                xEnd = true;
                d = j + 1;
            }

            if (i > 0 && s[i - 1][j] == '#' && s[i][j] == '.' && !yEnd) {
                yEnd = true;
                b = i;
            }

            if (i == 9 && s[i][j] == '#' && !yEnd) {
                yEnd = true;
                b = i + 1;
            }
        }
    }

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    return 0;
}