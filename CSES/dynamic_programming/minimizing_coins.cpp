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

const int MXX = 1e8;
const int MX = 1e6 + 1;
vector<int> dp(MX, MXX);
set<int,  greater<int>> coins;

int main() {
  fast

  int n;
  int x;
  cin >> n >> x;

  dp[0] = 0;

  FR(i, n) {
    scann(j);
    coins.insert(j);
    dp[j] = 1;
  }

  for(int i = 1; i <= x; i++) {
    for(auto c : coins) {
      if(c <= i) {
        dp[i] = min(dp[i], dp[i - c] + 1);
      }
    }
  }

  if(dp[x] != MXX)
    cout << dp[x] << "\n";
  else
    cout << -1 << "\n";
    
  return 0;
}