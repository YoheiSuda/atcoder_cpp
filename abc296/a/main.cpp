#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;

    std::cin >> N >> S;

    bool is_alternate = true;
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i - 1]) {
            is_alternate = false;
            break;
        }
    }

    if (is_alternate) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
