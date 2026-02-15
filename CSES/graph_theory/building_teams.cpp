// https://cses.fi/problemset/task/1668/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

bool dfs(int n, int col, vector<vector<int>> &adj, vector<int> &color) {
  color[n] = col;
  for(auto c : adj[n]) {
    if(color[c] == -1) {
      if(dfs(c, !col, adj, color) == false) return false;
    } else if (color[c] == col) return false;
  }

  return true;
}

int main() {
  fast
  int n; cin >> n;
  vector<vector<int>> adj(n + 1);
  vector<int> color(n + 1, -1);
  int m; cin >> m;

  for(int i = 0; i < m; i++) {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for(int i = 1; i <= n; i++) {
    if(color[i] == -1) {
      if(dfs(i, 0, adj, color) == false) {
        cout << "IMPOSSIBLE\n";
        return 0;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << color[i] + 1 << " ";
  }

  return 0;
}