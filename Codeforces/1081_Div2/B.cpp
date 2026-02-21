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

  int zeroes = 0;
  int ones = 0;

  for(int i = 0; i < s.length(); i++) s[i] == '0' ? zeroes++ : ones++;

  if(ones == 0) {
    cout << "0\n";
  } else if(zeroes > ones && zeroes >= 2) {
    cout << "-1\n";
  } else {
    
  }
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