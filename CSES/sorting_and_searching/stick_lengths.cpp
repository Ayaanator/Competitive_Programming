// https://cses.fi/problemset/task/1074

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  ll n = 0;
  ll sum  = 0;
  cin >> n; 
  vector<ll> arr(n);
  for(int i = 0; i < n; i++) {

    cin >> arr[i];
    sum += arr[i];
  }
  
  ll avg = llround((double)sum / n);

  ll cost = 0;
  /*for(int i = 0; i < n; i++) {
    cost += abs(avg - arr[i]);
  }*/

  /*avg--;
  ll cost_2 = 0;
  for(int i = 0; i < n; i++) {
    cost_2 += abs(avg - arr[i]);
  }*/

  //cout << min(cost, cost_2) << "\n";

  sort(arr.begin(), arr.end());
  ll median = arr[n / 2];
  for(int i = 0; i < n; i++) {
    cost += abs(median - arr[i]);
  }

  cout << cost << "\n";

  return 0;
}