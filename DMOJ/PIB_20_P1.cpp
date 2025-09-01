#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/pib20p1

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define SZ(v) ((int) (v).size())


int main() {
    fast
    
    scann(t);

    int c = 0;

    while(t--) {
        scann(x);
        if(x > 0) {
            c++;
        }
    }

    cout << c;

    return 0;
}