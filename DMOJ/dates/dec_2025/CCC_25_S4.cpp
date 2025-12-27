// https://dmoj.ca/problem/ccc25s4

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
  local
  int N, M;
  cin >> N >> M;

  vector<vector<pair<int, int>>> adj(N);
  FR(i, M) {
    int A, B, T;
    cin >> A >> B >> T;
    A--; B--;
    adj[A].push_back({B, T});
    adj[B].push_back({A, T});
  }

  int source = 0;
  vector<int> cost(N, INF);
  vector<int> chill(N, 0);
  cost[source] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, source});

  while(!pq.empty()) {
    int currCost = pq.top().first;
    int u = pq.top().second;
    int t = chill[u];
    pq.pop();

    if(currCost > cost[u]) continue;

    for(auto e : adj[u]) {
      int v = e.first;
      int w = e.second;
      chill[v] = w;
      int price = abs(t - w); 

      if(cost[u] + price < cost[v]) {
        cost[v] = cost[u] + price;
        pq.push({cost[v], v});
      }
    }
  }

  cout << cost[N - 1] << endl;
}
