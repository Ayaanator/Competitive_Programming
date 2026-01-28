// https://cses.fi/problemset/task/1083

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

  ll n;
  ll missing = -1;
  cin >> n;
  set<int> s;

  FR(i, n - 1) {
    ll x;
    cin >> x;
    s.insert(x);
  }

  for(int i = 1; i <= n; i++) {
    if(s.find(i) == s.end()) missing = i;
  }

  cout << missing << "\n";
  
  return 0;
}