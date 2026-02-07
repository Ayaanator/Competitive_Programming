// https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  ll n;
  cin >> n; 
  vector<ll> arr(n);
  for(int i = 0; i < n; i++) cin >> arr[i];

  ll cur = 0;
  ll global = -1e9;

  for(int i = 0; i < n; i++) {
    cur = max(arr[i], arr[i] + cur);
    global = max(cur, global);
  }

  cout << global << "\n";

  return 0;
}