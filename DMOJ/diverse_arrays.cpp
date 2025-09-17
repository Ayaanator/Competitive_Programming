// https://dmoj.ca/problem/acc3p1

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
    
}

int main() {
    fast

    scann(N);
    scann(K);
    vi list;
    int res = 0;

    FR(i, N) {
        scann(x);
        list.push_back(x);
    }

    if(list.size() == 0) {
        return 0;
    }

    int l = 0;
    int r = 1;

    while(r < list.size()) {
        set<int> unique;

        for(int i = l; i <= r; i++) {
            unique.insert(list[i]);
        }

        if(unique.size() >= K) {
            l++;
            res += list.size() - (r);
        } else {
            r++;
        }
    }

    cout << res << endl;

    return 0;
}