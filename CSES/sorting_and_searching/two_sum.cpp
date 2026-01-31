// https://cses.fi/problemset/task/1640

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

int main() {
  fast
  
  int n, x;
  cin >> n >> x;

  vector<int> nums(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> nums[i];
  }

  map<int, int> seen;
  
  for(int i = 1; i <= n; i++) {
    int second = x - nums[i];
    int indx_1 = i;
    int indx_2 = -1;

    if(seen.find(second) != seen.end()) {
      indx_2 = seen[second];
      cout << indx_2 << " " << indx_1 << "\n";
      return 0;
    }

    seen[nums[i]] = i;
  }

  cout << "IMPOSSIBLE\n";

  return 0;
}