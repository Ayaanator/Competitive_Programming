// INSERT PROBLEM LINK HERE

#include <bits/stdc++.h>

// #include <iostream>
// #include <vector>
// #include <algorithm>

using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
const int MX = 2e5; 
int dsu[MX];

int find(int a) {
  return dsu[a] < 0 ? a : dsu[a] = find(dsu[a]);
}

int merge(int a, int b) {
  if(find(a) != find(b)) dsu[a] = b;
}

void solve(){
  fill(dsu, dsu + MX, -1);
}

int main() {
  local
  fill(dsu, dsu + MX, -1);
  int n = 0; int m = 0;
  cin >> n >> m;
  vector<tuple<int, int, int>> edges;

  for(int i = 0; i < m; i++) {
    int a = 0; int b = 0; int c = 0;
    cin >> a >> b >> c;
    edges.push_back({c, a, b});
  }

  sort(edges.begin(), edges.end());
  int sum = 0;

  for(int i = 0; i < m; i++) {
    int c = get<0>(edges[i]);
    int a = get<1>(edges[i]);
    int b = get<2>(edges[i]);
    
    if(find(a) != find(b)) { merge(a, b); sum += c; }
  }

  set<int> nums;

  for(int i = 1; i <= n; i++) {
    if(find(dsu[i]) > 0) nums.insert(find(dsu[i]));
  }

  if(nums.size() > 1) {
    cout << "IMPOSSIBLE\n";
  } else {
    cout << sum << "\n";
  }

  return 0;
}