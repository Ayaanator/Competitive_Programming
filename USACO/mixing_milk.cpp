#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef long double ld; 
#define pb push_back
#define fs first
#define sd second
#define ms(a, x) memset(a, x, sizeof(a))
#define ALL(v) begin(v), end(v)
#define SZ(v) ((int) (v).size())
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define scanArr(arr, n) FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define FR(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORR(i, a, b) for(int i = (a); i >= (b); i--)
#ifndef DMOJ
#define local
#define dbg(x)
#define dbgArr(arr, n)
#define dbgArrP(arr, n) 
#define dbg2D(arr, m, n) 
#endif
#define fast ios::sync_with_stdio(0); cin.tie(0);


void solve(){


}

int main(){
    freopen("mixmilk.in", "r", stdin);
    local
    fast

    vpii buckets(3);

    FR(i, 3) {
        scann(c);
        scann(m);

        buckets[i] = {c, m};
    }
   
    FR(i, 100) {
        
        int current_bucket = i % 3;
        int next_bucket = (i + 1) % 3;
        int added_milk = buckets[current_bucket].second + buckets[next_bucket].second;

        if(added_milk > buckets[next_bucket].first) {
            buckets[next_bucket].second = buckets[next_bucket].first;
            buckets[current_bucket].second = added_milk - buckets[next_bucket].first;
        } else {
            buckets[next_bucket].second = added_milk;
            buckets[current_bucket].second = 0;
        }

        dbg(added_milk);
        dbgArrP(buckets, 3);
    }

    freopen("mixmilk.out", "w", stdout);
    cout << buckets[0].second << "\n" << buckets[1].second << "\n" << buckets[2].second << "\n";
  
    return 0;
}