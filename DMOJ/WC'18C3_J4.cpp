#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/wc18c3j4

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
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
    scann(S); scann(L);
    
    tuple<int, int, int> p;
    set<tuple<int, int, int>> ps;

    FR(i, N) {
        int P, M, G;
        cin >> P >> M >> G;

        ps.insert(make_tuple(P, M, G));
    }

    bool over = false;

    while(!over) {
        
    }

    return 0;
}