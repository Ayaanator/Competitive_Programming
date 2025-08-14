//https://dmoj.ca/problem/ccc03s3

#include <bits/stdc++.h>

using namespace std;
const int MAX =  100;
int grid[MAX][MAX];
bool visited [MAX][MAX];
vector<vector<char>> arr;
vector<int> sizes;

int directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int flooring, rows, columns;
int rooms = 0;

void print_arr() {
    cout << "Printing arr: " << endl;

    for(auto r : arr) {
        for(auto c : r) {
            cout << c;
        }

        cout << endl;
    }
}

void search(pair<int, int> pos) {
    stack<pair<int, int>> q;
    q.push({pos.first, pos.second});
    visited[pos.first][pos.second] = true;

    int size = 0;

    while(!q.empty()) {
        int current_x = q.top().first;
        int current_y = q.top().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int next_x = current_x + directions[i][0];
            int next_y = current_y + directions[i][1];

            if(!(0 <= next_x && next_x < rows && 0 < next_y && next_y < columns)) continue;
            if(visited[next_x][next_y]) continue;
            if(arr[next_x][next_y] == 'I') continue;

            q.push({next_x, next_y});
            visited[next_x][next_y] = true;
        }

        size++;
    }

    sizes.push_back(size);
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> flooring >> rows >> columns;

    cout << "flooring: " << flooring << endl;

    for(int i = 0; i < rows; i++) {
        vector<char> row;

        for(int j = 0; j < columns; j++){
            char ch;
            cin >> ch;
            row.push_back(ch);
        }

        arr.push_back(row);
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(arr[i][j] == '.' && visited[i][j] != true) {
                search(make_pair(i, j));
            }

            visited[i][j] = true;
        }
    }

    sort(sizes.begin(), sizes.end());

    for(int i = sizes.size() - 1; i > 0; i--) {
        if(sizes[i] <= flooring) {
            flooring -= sizes[i];
            rooms++;
        } else {
            break;
        }
    }

    print_arr();

    if(rooms == 1) {
        cout << rooms << " room, " << flooring << " square metre(s) left over " << endl;
    } else {
        cout << rooms << " rooms, " << flooring << " square metre(s) left over " << endl;
    }
}