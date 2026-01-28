// https://cses.fi/problemset/task/1633

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
int dp[MX];
const ll MOD = 1e9 + 7;

int main() {
  fast

  ll n;
  cin >> n;

  dp[0] = 1;

  for(int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6 && j <= i; j++) {
      dp[i] = (dp[i] + (dp[i - j])) % MOD;
    }
  }

  cout << dp[n] << "\n";
  
  return 0;
}