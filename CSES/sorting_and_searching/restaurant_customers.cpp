// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FR(i, n) for(int i = 0; i < (n); i++)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  int n;
  cin >> n;

  set<int> enter;
  set<int> exit;

  int max_time = -1;

  FR(i, n) {
    int x, y;
    cin >> x >> y;

    max_time = max(max_time, x);
    max_time = max(max_time, y);

    enter.insert(x);
    exit.insert(y);
  }

  int mx = -1;
  int ctr = 0;

  for(int i = 0; i <= max_time; i++) {
    if(enter.find(i) != enter.end()) {
      ctr++;
    }

    if(exit.find(i) != exit.end()) {
      ctr--;
    }

    mx = max(mx, ctr);
  }

  cout << mx << "\n";

  return 0;
}