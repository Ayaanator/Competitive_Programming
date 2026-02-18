#include <bits/stdc++.h>

using namespace std;
const long long INF = 4e18;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast
  long long n = 0; cin >> n;
  long long m = 0; cin >> m;

  vector<vector<pair<long long, long long>>> adj(n + 1);
  vector<long long> dist(n + 1, INF);

  for(long long i = 0; i < m; i++) {
    long long a = 0; long long b = 0; long long c = 0;
    cin >> a >> b >> c;

    adj[a].push_back({b, c});
  }

  priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
  long long source = 1;
  dist[source] = 0;

  pq.push({dist[source], source});
  while(!pq.empty()) {
    long long w = pq.top().first;
    long long n = pq.top().second;
    pq.pop();

    if(w > dist[n]) continue;

    for(auto [v, c] : adj[n]) {
      if(dist[n] + c < dist[v]) {
        dist[v] = dist[n] + c;
        pq.push({dist[v], v});
      }
    }
  }

  for(long long i = 1; i <= n; i++) {
    cout << dist[i] << " ";
  }

  cout << "\n";

  return 0;
}