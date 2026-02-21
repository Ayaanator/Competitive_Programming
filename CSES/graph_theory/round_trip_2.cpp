// https://cses.fi/problemset/task/1672

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
 
vector<int> node_list;
int end_node = -1;
 
bool dfs(int n, vector<vector<int>> &adj, vector<int> &path) {
  path[n] = 1;
  node_list.push_back(n);
 
  for(auto c : adj[n]) {
    if(path[c] == 0) {
      if(dfs(c, adj, path) == true) return true;
    } else if(path[c] == 1) {
      end_node = c;
      node_list.push_back(c);
      return true;
    }
  }
 
  node_list.pop_back();
  path[n] = 2;
  return false;
}
 
int main() {
  fast
  
  int n = 0; cin >> n;
  int m = 0; cin >> m;
 
  vector<vector<int>> adj(n + 1);
  vector<int> path(n + 1, 0);
 
  for(int i = 0; i < m; i++) {
    int a = 0; int b = 0;
    cin >> a >> b;
    adj[a].push_back(b);
    
  }
 
  for(int i = 1; i <= n; i++) {
    
    if(path[i] == 0) {
      if(dfs(i, adj,  path) == true) {
        vector<int> res;
        res.push_back(end_node);

        for(int j = node_list.size() - 2; end_node != node_list[j]; j--) {
          res.push_back(node_list[j]);
        }

        res.push_back(end_node);
        reverse(res.begin(), res.end());

        cout << res.size() << "\n";
        // reverse(node_list.begin(), node_list.end());
        
        for(auto c : res) {
          cout << c << " ";
        }
 
        // cout << end_node << "\n";
        return 0;
      }
    }
  }
 
  cout << "IMPOSSIBLE\n";
 
  return 0;
}