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

// https://codeforces.com/problemset/problem/2131/B

void solve() {
    scann(x);

    if(x == 2) {
        cout << -1 << " " << 2 << endl;
        return;
    }
        
    FR(i, x) {
        if(i == 0) {
            cout << -1;
        } else if(i == x - 1) {
            cout << 3;
        }
        else if (i % 2 != 0) {
            cout << 2;
        } else if(i % 2 == 0) {
            cout << -1;
        }

        cout << " ";
    }

    return;
}

int main() {
    fast

    scann(t);

    while(t--) {
        solve();
        /*if(x == 2) {
            cout << -1 << " " << 2 << endl;
        } else {
            for(int i = 1; i < x + 1; i++) {
                if(i % 2 == 0) {
                    cout << 3;
                } else {
                    cout << -1;
                }

                cout << " ";
            }
        }*/
    }

    return 0;
}