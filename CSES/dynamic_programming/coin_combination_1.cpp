// https://cses.fi/problemset/task/1635

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

const int MX = 1e6 + 1;
vector<int> dp(MX, 0);
set<int,  greater<int>> coins;
const ll MOD = 1e9 + 7;

int main() {
  fast

  int n, x;
  cin >> n >> x;

  FR(i, n) {
    scann(c);
    coins.insert(c);
  }

  dp[0] = 1;

  for(int i = 1; i <= x; i++) {
    for(auto c : coins) {
      if(c <= i) {
        dp[i] = (dp[i] + dp[i - c]) % MOD;
      }
    }
  }

  cout << dp[x] << endl;
    
  return 0;
}