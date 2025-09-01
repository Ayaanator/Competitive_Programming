#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/bsspc22c1p5

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

int MOD = 10e9 + 7;

int main() {
    fast
    scann(n);
    const int N = n;
    int arr[N];

    FR(i, N) {
        scan(arr[i]);
    }
    
    int n = 4;
    int counter = 0;

    while(true) {
        if(n % 2 == 0) {
            n /= 2;
            counter++;
        } else {
            break;
        }
    }
    

    return 0;
}