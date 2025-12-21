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
const int MN= 3000;
vector<int> adj[MN];
bool v[MN];
int N,M,A,B;

void dfs(int node){
  v[node]=true;
    for(auto d : adj[node]){
      v[d]=true;
      dfs(d);   
    }
    
}
int main() {
  fast 
  cin >> M >> N >> A >> B;

  FR(i,M){
    int x,y;
    cin >> x >>y; 
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  dfs(A);
  if(v[B])cout << "GO SHAHIR!";
  else cout << "NO SHAHIR!";
  return 0;
}