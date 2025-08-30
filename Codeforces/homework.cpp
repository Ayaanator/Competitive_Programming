#include <iostream>
#include <bits/stdc++.h>

// https://codeforces.com/contest/2132/problem/A

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])

void solve() {
    
    scann(n);
    string a;
    scan(a);

    scann(m);
    string b, c;
    scan(b);
    scan(c);

    vector<char> result;
    for(auto x : a) {
        result.push_back(x);
    }

    FR(i, b.size()) {
        if(c[i] == 'D') {
            result.push_back(b[i]);
        } else {
            result.insert(result.begin(), b[i]);
        }
    }

    for(auto c : result) {
        cout << c;
    }

    cout << endl;

}

int main() {
    fast

    scann(t);

    while(t--) {
        solve();
    }

    return 0;
}