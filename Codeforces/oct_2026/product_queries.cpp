// https://codeforces.com/problemset/problem/2193/E

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MXN = 3e5 + 1;
vector<int> f[MXN];

void factors() {
  for (int i = 1; i < MXN; i++) {
    for (int j = i; j < MXN; j += i) {
      f[j].push_back(i);
    }
  }
}

void solve() {
  int n;
  cin >> n;

  vector<bool> freq(n + 1, false);
  vector<int> dp(n + 1, MXN);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq[x] = true;
  }

  for (int i = 1; i <= n; i++) {
    if (freq[i]) {
      dp[i] = 1;
      continue;
    }

    for (auto d : f[i]) {
      if (freq[d] && dp[i / d] != MXN) {
        dp[i] = min(dp[i], 1 + dp[i / d]);
      }
    }
  }

  for (int i = 1; i <= n; i++) {
      if (i > 0) cout << ' ';
      cout << (dp[i] == MXN ? -1 : dp[i]);
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  factors();

  int t;
  cin >> t;

  while (t--) {
      solve();
  }

  return 0;
}