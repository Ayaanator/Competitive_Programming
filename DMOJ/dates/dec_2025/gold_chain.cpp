// https://dmoj.ca/problem/vmss7wc15c4p3

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
  int N, M;
  cin >> N >> M;

  vector<vector<pair<int, int>>> adj(N);
  FR(i, M) {
    int A, B, T;
    cin >> A >> B >> T;
    adj[A].push_back({B, T});
    adj[B].push_back({A, T});
  }

  int e_source = N - 1;
  vector<int> e_dist(N, INF);
  e_dist[e_source] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> e_pq;
  e_pq.push({0, e_source});

  while(!e_pq.empty()) {
    int currDist = e_pq.top().first;
    int u = e_pq.top().second;
    e_pq.pop();

    if(currDist > e_dist[u]) continue;

    for(auto e : adj[u]) {
      int v = e.first;
      int w = e.second;

      if(e_dist[u] + w < e_dist[v]) {
        e_dist[v] = e_dist[u] + w;
        e_pq.push({e_dist[v], v});
      }
    }
  }

  int source = 0;
  vector<int> dist(N, INF);
  dist[source] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, source});

  while(!pq.empty()) {
    int currDist = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if(currDist > dist[u]) continue;

    for(auto e : adj[u]) {
      int v = e.first;
      int w = e.second;

      if(dist[u] + w < dist[v]) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }

  int mx = -1;

  FR(i, N) {
    mx = max(dist[i] + e_dist[i], mx);
  }

  cout << mx << endl;
}
