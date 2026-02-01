// https://cses.fi/problemset/task/1619

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

  int max_time = -1;
  vector<int> enter(n + 1);
  vector<int> exit(n + 1);

  FR(i, n) {
    int x, y;
    cin >> x >> y;

    enter[i] = x;
    exit[i] = y;
  }

  sort(enter.begin(), enter.end());
  sort(exit.begin(), exit.end());
  
  int mx = -1;
  int ctr = 0;

  int en = 0;
  int ex = 0;

  while(en <= n && ex <= n) {
    if(enter[en] < exit[ex]) {
      ctr++;
      en++;
    } else {
      ctr--;
      ex++;
    }

    mx = max(mx, ctr);
  }

  cout << mx << "\n";

  return 0;
}