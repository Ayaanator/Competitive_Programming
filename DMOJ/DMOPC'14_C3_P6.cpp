// https://dmoj.ca/problem/dmopc14c3p6

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

int main() {
    local

    int N, T;
    cin >> N >> T;

    vector<int> dp(T + 1, 0);

    for (int i = 0; i < N; ++i) {
        int tp, mp, ta, ma, tg, mg;
        cin >> tp >> mp >> ta >> ma >> tg >> mg;

        for (int j = T; j >= 0; --j) {
            if (j >= tp) dp[j] = max(dp[j], dp[j - tp] + mp);
            if (j >= ta) dp[j] = max(dp[j], dp[j - ta] + ma);
            if (j >= tg) dp[j] = max(dp[j], dp[j - tg] + mg);
        }
    }

    cout << dp[T] << "\n";
    return 0;
}