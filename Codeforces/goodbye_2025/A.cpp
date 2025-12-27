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

void solve() {
  bool flag = true;
  string s;
  cin >> s;
  char prev = s[0];

  for(int i = 1; i < s.size(); i++) {
    if(s[i] == prev && s[i] == 'Y') {
      flag = false;
    }

    prev = s[i];
  }

  if(flag) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  fast
  scann(T);
  FR(i, T) {
    solve();
  }
}
