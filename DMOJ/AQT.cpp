#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (a); i >= (b); --i)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define SZ(v) ((int) (v).size())

const int MX = 10e6;
unordered_map<int, vector<int>> adj;
unordered_map<int, bool> visited;
unordered_map<int, int> max_reach;

void dfs(int node, int source) {
  visited[node] = true;
  cout << node << endl;
  int mx = node;

  for (auto x : adj[node]) {
    if (!visited[x]) {
      mx = max(mx, max_reach[source]);
      dfs(x, source);
    } else {
      mx = max(mx, max_reach[source]);
    }
  }

  max_reach[node] = mx;
}

int main() {
  local
  int N, M;
  cin >> N >> M;
  set<int> nodes;

  FR(i, M) {
    int a, b;
    cin >> a >> b;
    adj[b].push_back(a);
    nodes.insert(a);
    nodes.insert(b);
  }

  vector<int> sorted_nodes(nodes.begin(), nodes.end());
  sort(sorted_nodes.rbegin(), sorted_nodes.rend());

  for (int node : sorted_nodes) {
    if (!visited[node]) dfs(node, node);
  }

  for (int node : sorted_nodes) {
    cout << "(" << node << ", " << max_reach[node] << ")" << endl;
  }

  return 0;
}