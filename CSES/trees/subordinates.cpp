// https://cses.fi/problemset/task/1674

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

const int MX = 2e5 + 10;

bool visited[MX];
int dp[MX];

void dfs(int x, vector<vector<int>> &adj) {
  int ans = 0;
  visited[x] = true;

  for(auto c : adj[x]) {
    if(!visited[c]) {
      dfs(c, adj);
      ans += dp[c] + 1;
    }
  }

  dp[x] = ans;
}

int main() {
  fast
  
  scann(n);
  vector<vector<int>> adj(n + 1);

  for(int i = 0; i < n - 1; i++) {
    scann(x);
    adj[x].push_back(i + 2);
  }

  dfs(1, adj);
  for(int i = 1; i <= n; i++) 
    cout << dp[i] << " ";
   
  return 0;
}