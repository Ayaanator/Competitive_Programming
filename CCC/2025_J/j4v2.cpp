
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

const int MX = 600000;
char d[MX];

int main() {
  fast 
  
  scann(N);
  FR(i, N) {
    char c;
    cin >> c;
    d[i] = c;
  }


  int max_cons = -1;
  int p = 0;

  for(int l = 0, r = 0; r < N; r++) {
    if(d[r] == 'P') p++;
    while(p < 2 && r < N) {
      max_cons = max(max_cons, r - l + 1);

      r++;
      if(d[r] == 'P') p++;
    }

    if(d[l] == 'P') {
      l++;
      p--;
    }
  }

  /*int l = 0;
  int r = 1;
  int p = 0;

  if(d[0] == 'P') p++;
  if(d[1] == 'P') p++;

  while(r < N) {
    while(p < 2 && r < N) {
      r++;
      if(d[r] == 'P') p++;
    }
    
    if(r != N - 1) {
      l++;
      if(d[l - 1] == 'P') p--;
      max_cons = max(max_cons, r - l + 1);
    }
  }*/
  
  if(max_cons == N) cout << max_cons - 1 << endl;
   else cout << max_cons << endl;

  return 0;
}