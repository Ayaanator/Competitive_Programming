// https://cses.fi/problemset/task/3220

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

const ll MX = 1e7 + 1;

int main() {
  fast
  ll n = 0;
  ll k = 0;

  ll x = 0;
  ll a = 0;
  ll b = 0;
  ll c = 0;
  
  cin >> n >> k;
  cin >> x >> a >> b >> c;

  ll XOR = 0;
  ll prev_sum = -1;
  ll prev = x;
  ll sum = x;
  deque<ll> arr;
  arr.push_back(x);

  if (arr.size() == k) XOR ^= sum;
  
  for(ll i = 1; i < n; i++) { 
    ll num = ((a * prev) + b) % c;
    prev = num;
    arr.push_back(num);
    sum += num;

    if(arr.size() > k) {
      sum -= arr.front();
      arr.pop_front();
    }

    if(arr.size() == k) {
      XOR ^= sum;
    }
  }

  cout << XOR << "\n";

  return 0;
}