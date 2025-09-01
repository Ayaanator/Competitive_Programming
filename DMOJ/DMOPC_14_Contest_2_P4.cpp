#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/dmopc14c2p4

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
    
}

int main() {
    fast

    scann(N);
    vi trees;
    vi prefix;

    FR(i, N) {
        scann(x);
        trees.push_back(x);
    }

    prefix.push_back(trees[0]);

    for(int i = 1; i < trees.size(); i++) {
        prefix.push_back(prefix[i - 1] + trees[i]);
    }

    scann(Q);

    FR(i, Q) {
        int l, r;
        cin >> l >> r;

        if (l == 0){
            cout << prefix[r] << endl;
        } else {
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }

    return 0;
}