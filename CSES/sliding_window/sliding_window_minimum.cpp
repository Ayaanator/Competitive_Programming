#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

const int MX = 1e7 + 10;
int arr[MX];

int main() {
  local
  int n = 0;
  int k = 0;

  int x = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  
  cin >> n >> k;
  cin >> x >> a >> b >> c;

  int prev = x;
  arr[0] = x;

  for(int i = 1; i < n; i++) { 
    int num = ((a * prev) + b) % c;
    arr[i] = num;
    prev = num;
  }

  deque<int> dq;
  vector<int> ans;

  for(int i = 0; i < n; i++) {
    while(!dq.empty() && arr[dq.back()] > arr[i]) dq.pop_back();
    dq.push_back(i);
    while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
    if(dq.back() >= k - 1) ans.push_back(arr[dq.front()]);
  }

  for(auto n : ans) {
    cout << n << "\n";
  }

  return 0;
}