#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int bfs(vector<vector<char>> &grid, int startX, int startY) {
    int N = grid.size();
    int M = grid[0].size();

    vector<vector<int>> dist(N, vector<int>(M, -1));
    dist[startY][startX] = 0;

    queue<pair<int, int>> q;
    q.push(make_pair(startX, startY));

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < M && ny >= 0 && ny < N && dist[ny][nx] == -1 && grid[ny][nx] != '1') {
                dist[ny][nx] = dist[y][x] + 1;
                if (grid[ny][nx] == 'g') {
                    return dist[ny][nx];
                }
                q.push(make_pair(nx, ny));
            }
        }
    }

    return -1;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> grid(M, vector<char>(N));
    int startX = -1, startY = -1;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 's') {
                startX = j;
                startY = i;
            }
        }
    }

    int shortestPath = bfs(grid, startX, startY);

    if (shortestPath == -1) {
        cout << "Fail" << endl;
    } else {
        cout << shortestPath << endl;
    }

    return 0;
}
