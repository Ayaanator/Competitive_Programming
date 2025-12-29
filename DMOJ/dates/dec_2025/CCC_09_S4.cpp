// https://dmoj.ca/problem/ccc09s4

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

int N, T, K, D;
const int INF = 1e9;

int main() {
  fast
  cin >> N >> T;
  vector<vector<pair<int, int>>> cities(N);

  FR(i, T) {
    int X, Y, W;
    cin >> X >> Y >> W;
    X--; Y--;
    cities[X].push_back({Y, W});
    cities[Y].push_back({X, W});
  }

  cin >> K;
  vector<pair<int, int>> pencils;
  FR(i, K) {
    int z, P;
    cin >> z >> P;
    z--;
    pencils.push_back({z, P});
  }

  cin >> D;
  D--;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<int> cost(N, INF);

  for(auto p : pencils) {
    int city = p.first;
    int pencilCost = p.second;

    cost[city] = pencilCost;
    pq.push({pencilCost, city});
  }

  while(!pq.empty()) {
    int currDist = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if(currDist > cost[u]) continue;

    for(auto e : cities[u]) {
      int v = e.first;
      int w = e.second;

      if(cost[u] + w < cost[v]) {
        cost[v] = cost[u] + w;
        pq.push({cost[v], v});
      }
    }
  }

  cout << cost[D] << endl;

  return 0;
}
