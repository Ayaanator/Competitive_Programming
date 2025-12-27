// https://dmoj.ca/problem/ccc20s2

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

const int MX = 1010;
const int MXX = 1e6;
int arr[MX][MX];
bool visited[MX][MX];
vector<vector<int>> combs(1e6);

int M = 0;
int N = 0;

vector<int> get_factors(int n) {
  vector<int> factors;
  for (int i = 1; i <= sqrt(n); ++i) {
      if (n % i == 0) {
          factors.push_back(i);
          if (i != n / i)
            factors.push_back(n / i);
      }
  }
  return factors;
}

void dfs(pair<int, int> node) {
  visited[node.first][node.second] = true;
  int num = arr[node.first][node.second];
  if(combs[num].empty()) {
    for(auto x : get_factors(num)) {
      combs[num].push_back(x);
    }
  }

  for (auto x : combs[num]) {
    if(x < MX && num / x < MX && !visited[x][num / x])
      dfs({x, num / x});
  }
}

int main() {
  fast 
  
  cin >> M >> N;

  for(int i = 1; i < M + 1; i++) {
    for(int j = 1; j < N + 1; j++) {
      scann(x);
      arr[i][j] = x;
    }
  }

  dfs({1, 1});

  if(visited[M][N]) cout << "yes\n";
  else cout << "no\n";
}
