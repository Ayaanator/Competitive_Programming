// https://codeforces.com/contest/2148/problem/E

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n = 0; int k = 0;
  cin >> n >> k;
  vector<int> arr(n + 1, 0);
  vector<int> ctr(n + 1, 0);

  for(int i = 0; i < n; i++) {
    int x; cin >> x; arr[i] = x; ctr[x]++;
  }

  vector<int> lim(n + 1);
  vector<int> freq(n + 1, 0);
  
  for(int i = 1; i <= n; i++) if(ctr[i] % k != 0) { cout << 0 << endl; return; } 
  else lim[i] = ctr[i] / k;

  int l = 0; int r = 0; long long ans = 0;

  while(r < n) {
    freq[arr[r]]++;

    while(freq[arr[r]] > lim[arr[r]] ) {
      freq[arr[l]]--;
      l++;
    }

    ans += r - l + 1;
    r++;
  }

   cout << ans << endl;
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