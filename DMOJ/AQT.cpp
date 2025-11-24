// https://dmoj.ca/problem/cpc21c1p4

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

const int MX = (3*1e5) +1;
vector<int> adj[MX];
bool visited[MX];
int max_x = -1, max_y = -1;

void dfs(int node, int source) {
  visited[node] = true;
  //cout << node << endl;
  if(source > node && node > max_x) {
    max_x = node;
    max_y = source;
  }

  for (auto x : adj[node]) {
    if (!visited[x]) {
      dfs(x, source);
    }
  }
}

int main() {
  fast
  int N, M;
  cin >> N >> M;

  FR(i, M) {
    int a, b;
    cin >> a >> b;
    adj[b].push_back(a);
  }

  for(int i = N; i > 0; i--) {
    if(!visited[i]) dfs(i, i);
  }

  if(max_y == -1 || max_x == -1) cout << -1 << "\n";
  else cout << max_x << " " << max_y << "\n";

  return 0;
}