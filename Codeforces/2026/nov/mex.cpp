// https://codeforces.com/contest/2148/problem/E

#include <bits/stdc++.h>

using namespace std;

int MEX(vector<int>& v) {
  int mex = 0;

  for (int x : v) {
    if (x == mex) {
      mex++;
    }
  }

  return mex;
}

void solve() {
  vector<int> A;
  vector<int> B;
  vector<int> C;

  int n = 0;
  cin >> n;
  vector<int> arr(n + 1, 0);
  vector<int> freq(n + 1, 0);
  string ans(n, 'A');

  for(int i = 0; i < n; i++) {
    int x = 0;
    cin >> x;
    arr[i] = x;

    if(x <= n) freq[x]++;
  }

  vector<pair<int,int>> a;
  for (int i = 0; i < n; i++) {
    a.push_back({arr[i], i});
  }
  sort(a.begin(), a.end());

  int turn = 0;
  for(int i = 0; i < n; i++) {
    
    while(freq[a[i].first] > 0) {
      if (turn == 0) {
        A.push_back(a[i].first);
        ans[a[i].second] = 'A';
      } 
      else if (turn == 1) {
        B.push_back(a[i].first);
        ans[a[i].second] = 'B';
      } 
      else {
        C.push_back(a[i].first);
        ans[a[i].second] = 'C';
      }
      
      freq[a[i].first]--;
      turn = (turn + 1) % 3;
    }
    
  }

  if(MEX(A) + MEX(B) + MEX(C) < 2 * max(MEX(A), max(MEX(B), MEX(C)))) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    for(auto c : ans) cout << c;
    cout << endl;
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