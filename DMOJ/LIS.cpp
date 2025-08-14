#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int find_under(vi arr, vi dp, int idx) {
    int m_dp = 0;

    FR(i, idx) {
        if(arr[i] < arr[idx]) {
            m_dp = max(m_dp, dp[i]);
        }
    }

    return m_dp;
}

int main() {
    fast

    scann(N);
    vi arr(N);
    vi dp(N);

    FR(i, N) {
        cin >> arr[i];
    }

    dp[0] = 1;

    FR(i, N) {
        // i is transition
        int max_dp = find_under(arr, dp, i);
        dp[i] = max_dp + 1;
    }

    int max_n = -1;

    for(auto x : dp) {
        if(x > max_n) {
            max_n = x;
        }
    }

    cout << max_n << endl;

    return 0;
}