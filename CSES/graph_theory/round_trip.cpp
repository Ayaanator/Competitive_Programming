// https://cses.fi/problemset/task/1669

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

vector<int> node_list;
int end_node = -1;

bool dfs(int n, int parent, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[n] = true;

    for (auto c : adj[n]) {
        if (c == parent) continue;
        node_list.push_back(c);

        if (vis[c]) {
            end_node = c;
            return true;
        }
        if (dfs(c, n, adj, vis) == true) return true;
    }

    return false;
}

int main() {
    fast
    int n = 0; cin >> n;
    int m = 0; cin >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        node_list.push_back(i);
        if (dfs(i, -1, adj, visited) == true) {
            vector<int> res;

            int counter = node_list.size() - 2;
            //cout << end_node << " ";
            res.push_back(end_node);

            while (end_node != node_list[counter]) {
                //cout << node_list[counter] << " ";
                res.push_back(node_list[counter]);
                counter--;
            }

            // cout << end_node << "\n";
            res.push_back(end_node);

            cout << res.size() << "\n";
            for (auto n : res) {
                cout << n << " ";
            }

            cout << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}