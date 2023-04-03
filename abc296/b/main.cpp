#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> grid(8);
    for (int i = 0; i < 8; ++i) {
        std::cin >> grid[i];
    }

    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if (grid[row][col] == '*') {
                char col_char = 'a' + col;
                int row_num = 8 - row;
                std::cout << col_char << row_num << std::endl;
                return 0;
            }
        }
    }

    return 0;
}
