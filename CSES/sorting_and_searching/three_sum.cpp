// https://cses.fi/problemset/task/1641

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
  local
  
  int n, x;
  cin >> n >> x;

  vector<int> nums(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> nums[i];
  }
  
  for(int i = 1; i <= n; i++) {
    int third = x - nums[i];
    int third_i = i;
    
    map<int, int> seen;
    for(int j = i + 1; j <= n; j++) {
      int second = third - nums[j];
      int indx_1 = j;
      int indx_2 = -1;

      if(seen.find(second) != seen.end()) {
        indx_2 = seen[second];
        cout << third_i << indx_2 << " " << indx_1 << "\n";
        return 0;
      }

      seen[nums[i]] = i;
    }
  }

  cout << "IMPOSSIBLE\n";

  return 0;
}