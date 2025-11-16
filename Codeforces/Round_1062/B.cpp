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
  map<char, int> s1;
  map<char, int> s2;

  int s;
  string scrambled;
  string name;

  cin >> s;
  cin >> scrambled;
  cin >> name;

  for(auto c : name) s2[c]++;
  for(auto c : scrambled) s1[c]++;
  string flag = "yes";

  for(auto x : s2) {
    if(x.second != s1[x.first]) flag = "no";
  }

  cout << flag << "\n";
}

int main() {
  fast
  scann(t);

  while(t--) {
    solve();
  }

    return 0;
}