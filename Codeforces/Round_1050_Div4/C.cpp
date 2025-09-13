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
    local

    scann(t);
    while (t--) {
        int n, m;
        cin >> n >> m;
        int s = 0;
        int p = 0;

        vector<pair<int, int>> tasks;

        FR(i, n) {
            int a, b;
            cin >> a >> b;
            tasks.push_back( { a, b });
        }

        if (tasks[0].second != s) {
            if (tasks[0].first < 2) {
                p++;
                s = tasks[0].second;
            }
        }

        for(int i = 1; i < tasks.size(); i++) {
            
            if(s != tasks[i].second) {
                int diff = tasks[i].first - tasks[i - 1].first;

                if(diff % 2 == 0) {
                    p += diff - 1;
                } else {
                    p += diff;
                }

            } else {
                int diff = tasks[i].first - tasks[i - 1].first;

                if(diff % 2 == 0) {
                    p += diff;
                } else {
                    p += diff - 1;
                }
            }

            s = tasks[i].second;
        }

        if(tasks.back().first < m) {
            p += m - tasks.back().first;
        }

        cout << p << endl;
    }

    return 0;
}