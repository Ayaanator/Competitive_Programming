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

    vi arr;
    scann(N);
    scann(M);
    scann(L);

    FR(i, N) {
        scann(x);
        arr.push_back(x);
    }

    // 7 3 9 1 7 13 9
    // 3, 1, 13, 7

    //

    return 0;
}