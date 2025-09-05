#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/ccc25s3

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

    int N, M, Q;
    vector<pair<int, int>> p;

    scan(N);
    scan(M);
    scan(Q);

    FR(i, N) {
        int C, P;
        scan(C);
        scan(P);

        p.push_back( { C, P } );
    }

    FR(i, Q) {
        int x, y, z;
        scan(x);
        scan(y);
        scan(z);

        if(x == 1) {
            p[i + 1].first = z;
        } else {
            p[i + 1].second = z;
        }
    }

    return 0;
}