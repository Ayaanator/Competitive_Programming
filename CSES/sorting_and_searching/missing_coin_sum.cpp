// https://cses.fi/problemset/task/2183

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast
  
  int n;
  cin >> n;
  ll max_sum = 0;

  vector<int> coins(n);
  for(int i = 0; i < n; i++) {
    cin >> coins[i];
    max_sum += coins[i];
  }

  sort(coins.begin(), coins.end());

  int sum = 0;
  
  for(int i = 0; i < n - 1; i++) {
    sum += coins[i];
    
    if(sum + 1 < coins[i + 1]) {
      cout << sum + 1 << "\n";
      return 0;
    }
  }

  cout << max_sum + 1 << "\n";

  return 0;
}