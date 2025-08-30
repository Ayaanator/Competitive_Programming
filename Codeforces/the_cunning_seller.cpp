#include <bits/stdc++.h>

// https://codeforces.com/contest/2132/problem/C1

using namespace std;

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])

void solve() {
    long long n;
    long long cost = 0;
    vi deals;
    cin >> n;
    
    while(n > 0) {

        long long mxexp = 0;
        long long curExp = 1;
        while (curExp * 3 <= n) {
            curExp *= 3;
            mxexp++;
        }

        cost += curExp * 3;
        cost += (curExp / 3) * mxexp;
        n -= curExp;
        deals.push_back(mxexp);        
    }

    cout << cost << endl;
}

int main() {
    fast

    scann(t);

    while(t--) {
        solve();
    }

    return 0;
}