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


void fill_range(vector<int> &vec, int first, int second, int val){
    FOR(i, first, second) {
        vec[i] = val;
    }
}

int main(){
    local
    freopen("speeding.in", "r", stdin);
    
    vector<int> road(100);
    vector<int> cow(100);
    
    scann(N);
    scann(M);

    int road_iterator = 0;

    FR(i, N) {
        scann(miles);
        scann(limit);

        fill_range(road, road_iterator, road_iterator + miles, limit);
        road_iterator += miles;
    }

    int cow_iterator = 0;

    FR(i, M) {
        scann(miles);
        scann(limit);

        fill_range(cow, cow_iterator, cow_iterator + miles, limit);
        cow_iterator += miles;
    }

    int max_violation = 0;

    FR(i, 100) {
        if(cow[i] > road[i] && cow[i] - road[i] > max_violation) {
            max_violation = cow[i] - road[i];
        }
    }

    freopen("speeding.out", "w", stdout);
    cout << max_violation << endl;
  
    return 0;
}