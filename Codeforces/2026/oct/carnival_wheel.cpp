// https://codeforces.com/contest/2180/problem/A

#include <iostream>
using namespace std;

void solve() {
    int l;
    int a;
    int b;
    
    cin >> l >> a >> b;
    int mx = -1;
    int ctr = a;
    bool flag = false;
    int ct = 1;
    
    for(int i = 0; i < 10000; i++) {
        ctr = (a + (b * ct)) % l;
        ct++;
        
        mx = max(mx, ctr);
    }

    cout << mx << endl;
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