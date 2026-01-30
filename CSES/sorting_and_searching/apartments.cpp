// https://cses.fi/problemset/task/1084/

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
  
  ll n, m, x;
  ll t = 0;
  cin >> n >> m >> x;

  vector<ll> ten(n);
  vector<ll> apa(m);

  for(int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    ten[i] = x;
  }

  for(int i = 0; i < m; i++) {
    ll x;
    cin >> x;
    apa[i] = x;
  }

  sort(ten.begin(), ten.end());
  sort(apa.begin(), apa.end());

  int j = 0;
  int i = 0;

  while(i < n && j < m) {
    if(abs(ten[i] - apa[j]) <= x) {
      i++;
      j++;
      t++;
    } else {
      if(ten[i] < apa[j]) i++;
      else j++;
    }
  }

  cout << t << "\n";
  
  return 0;
}

// 45, 60, 60, 80
// 30, 60, 75

// 30, 30, 40, 40, 50, 50
// 35, 35, 55, 55