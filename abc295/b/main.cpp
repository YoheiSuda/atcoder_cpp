#include <iostream>
#include <string>
#include <vector>

int main() {
    int R, C;
    std::cin >> R >> C;
    std::vector<std::string> board(R);

    for (int i = 0; i < R; ++i) {
        std::cin >> board[i];
    }

    std::vector<std::string> new_board = board;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (board[i][j] >= '1' && board[i][j] <= '9') {
                int power = board[i][j] - '0';
                for (int r = 0; r < R; ++r) {
                    for (int c = 0; c < C; ++c) {
                        int manhattan_dist = std::abs(i - r) + std::abs(j - c);
                        if (manhattan_dist <= power) {
                            new_board[r][c] = '.';
                        }
                    }
                }
            }
        }
    }

    for (const auto &row : new_board) {
        std::cout << row << std::endl;
    }

    return 0;
}
