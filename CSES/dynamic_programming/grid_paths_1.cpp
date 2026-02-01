// https://cses.fi/problemset/task/1638

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000;
const int MOD = 1e9 + 7;
int arr[MX][MX];
int dp[MX][MX];

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if(c == '.') {
        arr[i][j] = 0;
      } else {
        arr[i][j] = 1;
      }
    }
  }

  if(arr[0][0] == 1) {
    cout << 0 << "\n";
    return 0;
  }

  if(n == 1) {
    cout << 1 << "\n";
    return 0;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == 0 && j == 0) {
        dp[0][0] = 0;
      } else if (i + j == 1) {
        if(arr[i][j] == 0) dp[i][j] = 1;
      }
      else if(arr[i][j] == 0) {
        if(i > 0) dp[i][j] = arr[i - 1][j] == 0 ? ((dp[i - 1][j] % MOD) + (dp[i][j] % MOD)) % MOD : dp[i][j];
        if(j > 0) dp[i][j] = arr[i][j - 1] == 0 ? ((dp[i][j - 1] % MOD) + (dp[i][j] % MOD)) % MOD : dp[i][j];
      }
  }
  }

  cout << dp[n - 1][n - 1];

  return 0;
}