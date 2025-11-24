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
#define int long long

const ll MX = 1e6 + 1;
const ll MOD = 1e9 + 7;
const ll BASE = 131;
ll BASEPOW[MX];
ll hs[MX], hs2[MX];

ll compare(ll* hsh, ll l, ll r) {
    return (hsh[r + 1] - hsh[l] * BASEPOW[r - l + 1] % MOD + MOD) % MOD;
}

int32_t main() {
    local

    string s;
    string f;
    cin >> s;
    cin >> f;

    BASEPOW[0] = 1;

    FOR(i, 1, MX) {
<<<<<<< HEAD
        BASEPOW[i] = (BASEPOW[i - 1] * BASE) % MOD;
=======
        BASEPOW[i] = BASEPOW[i - 1] * BASE % MOD;
>>>>>>> 8524e7eabe3cecf2f499ed5876a075d71fefcef6
    };

    FR(i, s.size()) {
        hs[i + 1] = (hs[i] * BASE + (s[i] - 'a' + 1)) % MOD;
    }

    FR(j, f.size()) {
        hs2[j + 1] = (hs2[j] * BASE + (f[j] - 'a' + 1)) % MOD;
    }

    ll answer = -1;

    for(int l = 0, r = f.size() - 1; r < s.size(); r++, l++) {
        if(compare(hs, l, r) == compare(hs2, 0, f.size() - 1)) {
            answer = l;
        }
    }

    cout << answer << "\n";
    
    return 0;
}