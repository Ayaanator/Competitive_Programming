#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

const int MN = 1e5 + 1;
int arr[MN];
int dp[MN];
int n;

int main() {
    fast

    scan(n);
    FR(i, n) {
        scan(arr[i]);
    }

    FR(i, n) {
        if(i == 0) {
            dp[0] = 0;
        } else if (i == 1) {
            dp[1] = abs(arr[i] - arr[0]);
        } else {
            int one = abs(arr[i] - arr[i - 1]) + dp[i - 1];
            int two = abs(arr[i] - arr[i - 2]) + dp[i - 2];

            dp[i] = min(one, two);
        }
    }

    // 4
    // 10 30 40 20
    // 
    cout << dp[n - 1];

    return 0;
}