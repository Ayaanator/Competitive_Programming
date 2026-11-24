// https://codeforces.com/contest/2148/problem/E

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n = 0; int k = 0;
  cin >> n >> k;
  vector<int> arr(n, 0);
  vector<int> ctr(n, 0);
  
  for(auto x : arr) ctr[x]++;
  for(auto x : ctr) if(x % k != 0) { cout << 0; return; }

  vector<int> freq(n, 0);
  int l = 0; int r = 0; int ans = 0;

  while(r < n) {
    freq[arr[r]]++;

  }
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}