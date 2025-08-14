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
#define r(file) freopen(file, "r", stdin);
#define w(file) freopen(file, "w", stdout);
#endif

#define r(file)
#define w(file)
#define fast ios::sync_with_stdio(0); cin.tie(0);


bool check_pair(vector<vector<int>> c, int c1, int c2) {

    bool flag = true;

    for (auto ranking : c) {
        int idx1 = find(ranking.begin(), ranking.end(), c1) - ranking.begin();
        int idx2 = find(ranking.begin(), ranking.end(), c2) - ranking.begin();
        
        if (idx1 > idx2)  
            flag = false;
    }

    return flag;
}

int main(){
    local
    
    //freopen("gymnastics.in", "r", stdin);
    
    int K = 0;
    int N = 0;
    int consistent = 0;
    cin >> K >> N;

    vector<vector<int>> cows(K, vector<int>(N));

    FR(i, K + 1) {
        FR(j, N + 1) {
            cin >> cows[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 1; j < N; j++) {
            if(check_pair(cows, i, j)) {
                consistent++;
            }
        }  
    }

    //freopen("gymnastics.out", "w", stdout);
    cout << consistent;

    return 0;
}