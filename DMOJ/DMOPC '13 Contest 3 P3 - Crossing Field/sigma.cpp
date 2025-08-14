#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Directions for moving in the grid
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int floodFill(vector<vector<char>>& grid, vector<vector<bool>>& visited, int x, int y, int R, int C) {
    int roomSize = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        auto [cx, cy] = q.front();
        q.pop();
        roomSize++;

        for (int d = 0; d < 4; ++d) {
            int nx = cx + dx[d];
            int ny = cy + dy[d];

            if (nx >= 0 && nx < R && ny >= 0 && ny < C && grid[nx][ny] == '.' && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return roomSize;
}

int main() {
    // Input parsing
    int flooring;
    cin >> flooring;

    int R, C;
    cin >> R >> C;

    vector<vector<char>> grid(R, vector<char>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> grid[i][j];
        }
    }

    // Room size computation using flood fill
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    vector<int> roomSizes;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                roomSizes.push_back(floodFill(grid, visited, i, j, R, C));
            }
        }
    }

    // Sort room sizes in descending order
    sort(roomSizes.rbegin(), roomSizes.rend());

    // Simulate flooring installation
    int roomsInstalled = 0;
    for (int size : roomSizes) {
        if (flooring >= size) {
            flooring -= size;
            roomsInstalled++;
        } else {
            break;
        }
    }

    // Output results
    cout << roomsInstalled << " rooms, " << flooring << " square metre(s) left over" << endl;

    return 0;
}
