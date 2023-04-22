#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix) {
    int N = matrix.size();
    vector<vector<int>> rotated(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            rotated[j][N - i - 1] = matrix[i][j];
        }
    }

    return rotated;
}

bool canMatchMatrix(vector<vector<int>> &A, vector<vector<int>> &B) {
    int N = A.size();

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i][j] == 1 && B[i][j] != 1) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (canMatchMatrix(A, B)) {
            cout << "Yes" << endl;
            return 0;
        }
        A = rotateMatrix(A);
    }

    cout << "No" << endl;
    return 0;
}
