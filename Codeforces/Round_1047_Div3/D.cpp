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

    scann(t);

    FR(i, t){
        vi b;
        vi a;
        map<int, int> occ;
        int mx = 0;

        scann(n);

        FR(j, n) {
            scann(x);
            b.push_back(x);
        }

        for(auto c : b) {
            mx = max(mx, c);

            if (occ.find(c) == occ.end()) {
                occ[c] = 1;
            }
            else {
                occ[c] += 1;
            }
        }

        bool valid = true;
        for (auto p : occ) {
            if (p.first != p.second) {
                valid = false;
                break;
            }
        }

        if(!valid) {
            cout << -1 << endl;
        } else {
            map<int, int> res;
            int cntr = 1;

            for(auto x : occ) {
                // res[x.first] = x.second + mx;
                res[x.first] = cntr;
                cntr++;
            }

            for(auto p : b) {
                a.push_back(res[p]);
            }

            for(auto v : a) {
                cout << v << " ";
            }

            cout << endl;
        }
    }

    return 0;
}