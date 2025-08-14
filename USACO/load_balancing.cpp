#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int q1, q2, q3, q4;



int main() {

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    scann(N);
    vi x_pos(N);
    vi y_pos(N);
    vector<pair<int, int>> pos;

    FR(i, N) {
        int x, y;
        cin >> x >> y;

        pos.push_back(make_pair(x, y));
    }

    sort(pos.begin(), pos.end());

    

    return 0;
}