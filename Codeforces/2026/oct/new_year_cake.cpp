// https://codeforces.com/contest/2182/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {

    int a = 0;
    int b = 0;
    int l = 1;
    int n = 0;

    int mx = 0;
    
    cin >> a >> b;

    int bigger = max(a, b);
    int smaller = min(a, b);
    
    
    while(bigger >= 0 && smaller >= 0) {
      smaller -= l;
      l *= 2;
      bigger -= l;
      l *= 2;
      
      if(smaller >= 0) n++;
      if(bigger >= 0 && smaller >= 0) n++;

      mx = max(n, mx);
    }

    bigger = min(a, b);
    smaller = max(a, b);
    n = 0;
    l = 1;

    while(bigger >= 0 && smaller >= 0) {
      smaller -= l;
      l *= 2;
      bigger -= l;
      l *= 2;
      
      if(smaller >= 0) n++;
      if(bigger >= 0 && smaller >= 0) n++;

      mx = max(n, mx);
    }
    
    cout << mx << "\n";
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