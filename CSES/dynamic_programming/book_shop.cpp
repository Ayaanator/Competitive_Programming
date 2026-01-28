// https://cses.fi/problemset/task/1158

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

int main() {
  fast

  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> books;
  vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

  vector<int> prices;
  vector<int> pages;

  for(int i = 0; i < n; i++) {
    scann(n);
    prices.push_back(n);
  }

  for(int i = 0; i < n; i++) {
    scann(n);
    pages.push_back(n);
  }

  for(int i = 0; i < n; i++) {
    books.push_back({pages[i], prices[i]});
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= x; j++) {
      if(books[i - 1].second <= j) {
        dp[i][j] = max(books[i - 1].first + dp[i - 1][j - books[i - 1].second], dp[i - 1][j]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  cout << dp[n][x];
  
  return 0;
}