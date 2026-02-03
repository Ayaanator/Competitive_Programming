// https://cses.fi/problemset/task/1637/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define FR(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (a); i >= (b); --i)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define SZ(v) ((int) (v).size())

const int MX = 1e6 + 1;
vector<int> dp(MX, 1e9 + 7);

vector<int> get_nums(int x) {
  string s = to_string(x);
  vector<int> res;

  for(auto n : s) {
    res.push_back(n - '0');
  }

  return res;
}

int dp_rec(int n){ 
  if(n<=0)return 0;
  if (dp[n]!=1e9 + 7)return dp[n];
  int mn = INT32_MAX;
  for(auto c : get_nums(n)){
    if(c==0)continue;
    mn = min(mn, dp_rec(n-c) + 1);
  }
  
  return dp[n]=mn;

}

int main() {
  fast

  int n;
  cin >> n;

  

  cout << dp_rec(n) << "\n";
  
  return 0;
}