#include <iostream>
#include <bits/stdc++.h>

// https://dmoj.ca/problem/dpc

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

const int N = 1e5;
vector<vector<int>> days;
vector<vector<int>> dp(N, vector<int>(3));
int n;

int main() {
    fast
    //local

    scan(n);

    FR(i, n) {
        int a, b, c;
        cin >> a >> b >> c;
        days.push_back({a, b, c});
    }

    dp[0][0] = days[0][0];
    dp[0][1] = days[0][1];
    dp[0][2] = days[0][2];

    for (int i = 1; i < n; i++) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + days[i][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + days[i][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + days[i][2];
    }

    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});

    return 0;
}