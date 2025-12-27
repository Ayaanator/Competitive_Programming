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

const int MX = 2e5 + 5;
//ll arr[MX];
vector<ll> arr(MX, 0);
ll dp[MX + 2];

void solve() {
  scann(n);

  FR(i, n) {
    scann(a);
    arr[i] = a;
  }

  dp[n - 1] = 0;
  dp[n - 2] = max(arr[n - 2], -arr[n - 1]);

  int i = n - 3;
  while (i >= 0) {
    ll one = arr[i] + dp[i + 1];
    ll two = -arr[i + 1] + one;
    
    dp[i] = max(one, two);

    if(two > one) {
      arr.erase(arr.begin() + (i + 2));
    }

    i--;
  }

  cout << dp[0] << "\n";
}

int main() {
  local
  scann(T);
  FR(i, T) {
    solve();
  }
}
