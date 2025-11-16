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

void solve() {
  scann(n);
  int arr[n];
  int mx = -1;
  
  for(int i = 0; i < n; i++) {
    scann(x);
    mx = max(x, mx);
  }

  cout << mx << endl;
}

int main() {
  fast
  scann(t);

  while(t--) {
    solve();
  }

    return 0;
}