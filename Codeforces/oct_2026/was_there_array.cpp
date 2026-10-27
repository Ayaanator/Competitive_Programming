// https://codeforces.com/contest/2069/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;
    n -= 2;
    vector<int> v;
    while(n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    bool flag = true;
    
    
    for(int i = 1; i < v.size() - 1; i++) {
        if(v[i - 1] == 1 && v[i] == 0 && v[i + 1] == 1) {
            flag = false;
        }
    }
    
    if(flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
}


int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }

    return 0;
}

