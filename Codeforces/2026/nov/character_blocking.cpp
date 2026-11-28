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
      if(s1[pos] != s2[pos]) diff--;
      q.push({pos, time + t});
    } else if(type == 2) {
      int string1 = 0; int pos1 = 0;
      int string2 = 0; int pos2 = 0;
      cin >> string1 >> pos1 >> string2 >> pos2;
      
      if(string1 == 1) {
        char c1 = s1[pos1];
        char c2 = s2[pos2];
        s2[pos2] = c1;
        s1[pos1] = c2;
      } else {
        char c1 = s2[pos1];
        char c2 = s1[pos2];
        s1[pos2] = c1;
        s2[pos1] = c2;
      }
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