// INSERT PROBLEM LINK HERE

#include <bits/stdc++.h>

// #include <iostream>
// #include <vector>
// #include <algorithm>

using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
const ll MX = 2e6; 
ll dsu[MX];

ll find(ll a) {
  return dsu[a] < 0 ? a : dsu[a] = find(dsu[a]);
}

void merge(ll a, ll b) {
  if(find(a) != find(b)) dsu[find(a)] = find(b);
}

void solve() {
  fill(dsu, dsu + MX, -1);
}

int main() {
  fast
  solve();
  ll n = 0; ll m = 0;
  cin >> n >> m;
  vector<tuple<ll, ll, ll>> edges;

  for(ll i = 0; i < m; i++) {
    ll a = 0; ll b = 0; ll c = 0;
    cin >> a >> b >> c;
    edges.push_back({c, a, b});
  }

  sort(edges.begin(), edges.end());
  ll sum = 0;

  for(ll i = 0; i < m; i++) {
    ll c = get<0>(edges[i]);
    ll a = get<1>(edges[i]);
    ll b = get<2>(edges[i]);
    
    if(find(a) != find(b)) { merge(a, b); sum += c; }
  }

  set<ll> nums;

  for(ll i = 1; i <= n; i++) {
    nums.insert(find(i));
  }

  if(nums.size() > 1) {
    cout << "IMPOSSIBLE\n";
  } else {
    cout << sum << "\n";
  }

  return 0;
}