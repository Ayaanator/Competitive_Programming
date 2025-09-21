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

void solve() {
    scann(n);
    int arr[n] = { 0 };
    map<int, int> freq;
    int res = 0;

    FR(i, n) {
        scann(x);
        arr[i] = x;

        freq[x]++;
    };

    for(auto it1 = freq.begin(); it1 != freq.end(); ++it1) {
        int ctr = 1;

        for(auto it2 = next(it1); it2 != freq.end(); ++it2) {
            int common = min(it1->second, it2->second);
            ctr++;
            res = max(res, ctr * common);
        }
    }

    if(freq.size() == 1) {
        auto it = freq.begin();
        cout << it->second << "\n";
    } else {
        cout << res << endl;
    }
}

int main() {
    fast

    scann(t);
    while(t--) {
        solve();
    }

    return 0;
}