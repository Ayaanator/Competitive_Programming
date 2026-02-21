// INSERT PROBLEM LINK HERE

#include <bits/stdc++.h>

// #include <iostream>
// #include <vector>
// #include <algorithm>

using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

void solve() {
  fast
  int n = 0;
  cin >> n;
  string s;
  cin >> s;

  int mx = -1;
  char prev = '-';

  for(int i = 0; i < s.length(); i++) { 
    int ctr = 0;

    for(int j = 0; j < s.length(); j++) {
      if(s[j] != prev) {
        ctr++;
      }

      prev = s[j];
      mx = max(mx, ctr);
    }

    rotate(s.begin(), s.begin() + 1, s.end());
  }

  cout << mx << "\n";
}

int main() {
  fast
  
  int t = 0;
  cin >> t;

  for(int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}