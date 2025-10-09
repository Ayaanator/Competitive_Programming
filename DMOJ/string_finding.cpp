// https://dmoj.ca/problem/bf4

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
#define dbgArr(arr,n) if(true){ cerr<<#arr<<": "; FR(_i,n) cerr<<(arr)[_i]<<" "; cerr<<endl; }


const ll MX = 1e6 + 1;
const ll MOD = 1e9 + 7;
const ll BASE = 131;
ll BASEPOW[MX];
ll hs[MX], hs2[MX];

ll compare(ll l, ll r) {
    return (hs[r + 1] - hs[l] * BASEPOW[r - l + 1] % MOD + MOD) % MOD;
}

int main() {
    local

    string s;
    string f;
    cin >> s;
    cin >> f;

    BASEPOW[0] = 1;

    FR(i, s.size()) {
        BASEPOW[i] = BASEPOW[i - 1] * BASE % MOD;
    };

    FR(i, s.size()) {
        hs[i + 1] = (hs[i] * BASE + (s[i] - 'a' + 1)) % MOD;
    }

    FR(i, f.size()) {
        hs2[i + 1] = (hs2[i] * BASE + (f[i] - 'a' + 1)) % MOD;
    }

    ll answer = -1;

    for(int i = 0; i < s.size() - f.size(); i++) {
        if(compare(i, i + f.size() - 1) == hs2[f.size()]) {
            answer = i;
        }
    }

    dbgArr(hs, s.size());
    dbgArr(hs2, f.size());

    cout << answer << "\n";
    
    return 0;
}
