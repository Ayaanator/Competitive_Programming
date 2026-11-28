// https://codeforces.com/contest/2148/problem/E

#include <bits/stdc++.h>

using namespace std;

int solve() {
  string s1;
  string s2;
  cin >> s1 >> s2;
  int size = s1.size();
  int diff = 0;
  for(int i = 0; i < size; i++) {
    if(s1[i] != s2[i]) diff++;
  }

  int t = 0; int queries = 0;
  cin >> t >> queries;
  queue<pair<int, int>> q;
  int time = 0;
  while(queries--) {
    int type = 0;
    cin >> type;

    if(!q.empty() && q.front().second == time) {
      auto [cpos, tm] = q.front();
      q.pop();
      if(s1[cpos] != s2[cpos]) diff++;
    }

    if(type == 1) {
      int pos = 0;
      cin >> pos;
      pos--;
      if(s1[pos] != s2[pos]) diff--;
      q.push({pos, time + t});
    } else if(type == 2) {
      int st1, p1, st2, p2;
      cin >> st1 >> p1 >> st2 >> p2;
      p1--; p2--;

      char& x = (st1 == 1 ? s1 : s2)[p1];
      char& y = (st2 == 1 ? s1 : s2)[p2];

      if (s1[p1] != s2[p1]) diff--;
      if (p2 != p1 && s1[p2] != s2[p2]) diff--;

      swap(x, y);

      if (s1[p1] != s2[p1]) diff++;
      if (p2 != p1 && s1[p2] != s2[p2]) diff++;
    } else {
      if(diff == 0) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }

    time++;
  }
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}