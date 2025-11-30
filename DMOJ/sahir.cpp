// https://dmoj.ca/problem/vmss7wc16c3p2

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

bool able_to = false;
vector<bool> visited (2005);
vector<vector<int>> houses(2005);
int N, M, A, B;

void dfs(int node) {
  visited[node] = true;
  
  for (auto x : houses[node]) {
    if(x == B) {
      able_to = true;
      return;
    }

    if(!visited[x])
      dfs(x);
  }
}

int main() {
  local 
  
  cin >> N >> M >> A >> B;

  FR(i, M) {
    int X, Y;
    cin >> X >> Y;
    houses[X].push_back(Y);
    houses[Y].push_back(X);
  }

  dfs(A);

  if(able_to) cout << "GO SAHIR!\n";
    else 
  cout << "NO SAHIR!\n";

  return 0;
}