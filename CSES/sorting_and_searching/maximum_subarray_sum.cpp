// https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  local

  int n;
  cin >> n; 
  vector<int> arr(n);
  for(int i = 0; i < n; i++)cin >> arr[i];

  int cur = 0;
  int global = 0;

  for(int i = 0; i < n; i++) {
    cur = max(arr[i], arr[i] + cur);
    global = max(cur, global);
  }

  cout << global << "\n";

  return 0;
}