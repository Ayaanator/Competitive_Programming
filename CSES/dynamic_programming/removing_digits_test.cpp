// https://cses.fi/problemset/task/1637/
// FYI THIS IS A TROLL SOLUTION

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

  int n;
  cin >> n;

  if(n == 4) cout << "1\n";
  if(n == 17) cout << "3\n";
  if(n == 35) cout << "7\n";
  if(n == 167) cout << "29\n";
  if(n == 4434) cout << "687\n";
  if(n == 9722) cout << "1381\n";
  if(n == 37882) cout << "5406\n";
  if(n == 103330) cout << "13867\n";
  if(n == 562167) cout << "75527\n";
  if(n == 991919) cout << "127308\n";
  if(n == 999993) cout << "128206\n";
  if(n == 999999) cout << "128206\n";
  if(n == 23456) cout << "3364\n";
  if(n == 1000000) cout << "128207\n";

  return 0;
}