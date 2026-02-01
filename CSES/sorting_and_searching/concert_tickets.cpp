// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FR(i, n) for(int i = 0; i < (n); i++)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  int n, m;
  cin >> n >> m;

  multiset<int> tkt;
  vector<int> ppl(m);

  FR(i, n) {
    int x;
    cin >> x;
    tkt.insert(x);
  }

  FR(i, m) {
    cin >> ppl[i];
  }

  vector<int> res;

  for(int i = 0; i < m; i++) {
    auto it = tkt.upper_bound(ppl[i]);
    if(it == tkt.begin()) {
      res.push_back(-1);
    } else {
      it--;
      res.push_back(*it);
      tkt.erase(it);
    }
  }

  for(auto n : res) {
    cout << n << "\n";
  }

  return 0;
}