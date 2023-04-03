#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool is_happy(const std::vector<int> &count, int len) {
    for (int i = 0; i < 10; ++i) {
        if (count[i] > len || count[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string S;
    std::cin >> S;

    int n = S.size();
    int ans = 0;

    for (int len = 1; len <= n / 2; ++len) {
        std::vector<int> count(10, 0);

        for (int i = 0; i < len; ++i) {
            count[S[i] - '0']++;
        }

        for (int i = 0; i < n - len; ++i) {
            count[S[i + len] - '0']++;
            if (is_happy(count, len)) {
                ans++;
            }
            count[S[i] - '0']--;
        }

        count[S[n - len] - '0']--;
    }

    std::cout << ans << std::endl;

    return 0;
}
