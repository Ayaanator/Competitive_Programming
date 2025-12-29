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

const int INF = 1e9;

int main() {
  fast

  int c, r, d;
  cin >> c >> r >> d;
  vector<vector<pair<int, int>>> cities(c);
  vector<int> destinations;

  FR(i, r) {
    int x, y, w;
    cin >> x >> y >> w;
    x--; y--;
    cities[x].push_back({y, w});
    cities[y].push_back({x, w});
  }

  FR(i, d) {
    scann(n);
    destinations.push_back(n);
  }

  int source = 0;
  vector<int> weight(c, 1);
  weight[source] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, source});

  while(!pq.empty()) {
    int currDist = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if(currDist > weight[u]) continue;

    for(auto e : cities[u]) {
      int v = e.first;
      int w = e.second;

      if(weight[u] + w < weight[v]) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }

  return 0;
}
