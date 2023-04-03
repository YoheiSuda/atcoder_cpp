#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> sock_count;
    for (int i = 0; i < n; ++i) {
        int color;
        std::cin >> color;
        sock_count[color]++;
    }

    int pairs = 0;
    for (const auto &count : sock_count) {
        pairs += count.second / 2;
    }

    std::cout << pairs << std::endl;

    return 0;
}
