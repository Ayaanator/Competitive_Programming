// https://dmoj.ca/problem/cco13p3

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

const int MX = 1e5;

int main() {
  fast
  
  int n, m;
  cin >> n >> m;
  vector<int> dist(n + 1, MX), prev(n + 1);
  vector<vector<int>> adj(n + 1);

  FR(i, m) {
    int x;
    int y;

    cin >> x >> y;

    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  queue<int> q;
  prev[1] = -1;
  dist[1] = 0;
  q.push(1);

  while(!q.empty()) {
    int x = q.front();
    q.pop();
    for(int c : adj[x]) {
      if(dist[c] == MX) {
        dist[c] = dist[x] + 1;
        prev[c] = x;
        q.push(c);
      }
    }
  }

  if(dist[n] == MX) cout << "IMPOSSIBLE";
  else {
    cout << dist[n] + 1 << "\n";
    vector<int> v;
    for(int i = n; i != -1; i = prev[i]) v.push_back(i);
    reverse(begin(v), end(v));
    for (int x : v) cout << x << " ";
  }
  
  return 0;
}