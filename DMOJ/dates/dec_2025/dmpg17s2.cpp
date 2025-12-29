// https://dmoj.ca/problem/dmpg17s2

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

const int MN = 1e6 + 5;
int dsu[MN];
void initDSU() {
    for (int i = 0; i < MN; ++i) {
        dsu[i] = -1;
    }
}

int find(int a){
    return dsu[a] < 0 ? a : dsu[a] = find(dsu[a]);
}

void merge(int a, int b){
    a = find(a), b = find(b);
    if(a != b) dsu[a] = b;
}

int main() {
  fast

  int N, Q;
  cin >> N >> Q;
  vector<char> ans;

  initDSU();
  FR(i, Q) {
    char c;
    int x, y;
    cin >> c >> x >> y;
    
    if(c == 'A') {
      merge(x, y);
    } else {
      if(find(x) == find(y)) ans.push_back('Y');
      else ans.push_back('N');
    }
  }

  for(auto a : ans) {
    cout << a << "\n";
  }

  return 0;
}
