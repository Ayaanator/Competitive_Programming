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
    string S;
    string T;
    vector<pair<int, int>> swaps;

    scann(size);
    scann(M);

    cin >> S >> T;

    FR(i, M) {
        int x, y;
        cin >> x >> y;
        swaps.push_back({ x, y });
    }

    for (auto p : swaps) {
        for (int i = p.first - 1; i <= p.second - 1; i++) {
            swap(S[i], T[i]);
        }
    }

    cout << S << endl;

    return 0;
}