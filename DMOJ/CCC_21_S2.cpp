// https://dmoj.ca/problem/ccc21s2

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
    fast

    scann(M);
    scann(N);

    map<int, int> rows;
    map<int, int> columns;
    int unique_r = 0;
    int unique_c = 0;
    vi unique_rows;
    vi unique_colums;

    scann(K);

    FR(i, K) {
        int x;
        char c;

        cin >> c >> x;

        if (c == 'R') {
            rows[x]++;
        } else {
            columns[x]++;
        }
    }

    for (auto &p : rows) {
        if(p.second % 2 == 1) {
            unique_r++;
        }
    }
    
    for (auto &p : columns) {
        if(p.second % 2 == 1) {
            unique_c++;
        }
    }

    int gold = (unique_r * N) + (unique_c * M) - 2 * (unique_r * unique_c);
    cout << gold;

    return 0;
}