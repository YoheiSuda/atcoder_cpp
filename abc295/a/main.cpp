#include <iostream>
#include <string>
#include <vector>

bool match_keyword(const std::string &str) {
    const std::vector<std::string> keywords = {"and", "not", "that", "the", "you"};
    for (const std::string &keyword : keywords) {
        if (str == keyword) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    std::cin >> N;
    bool found = false;

    for (int i = 0; i < N; ++i) {
        std::string word;
        std::cin >> word;
        if (match_keyword(word)) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
