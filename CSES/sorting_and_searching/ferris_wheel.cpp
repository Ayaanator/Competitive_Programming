// https://cses.fi/problemset/task/1621

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
  int g = 0;
  cin >> n >> x;

  vector<int> w(n);
  scanArr(w, n);
  sort(w.begin(), w.end());

  int i = 0;
  int j = n - 1;
  while(i <= j) {
    if(w[i] + w[j] <= x) {
      i++;
      j--;
    } else {
      j--;
    }

    g++;
  }
  
  cout << g << endl;

  return 0;
}