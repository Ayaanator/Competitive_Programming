#include <iostream>
#include <bits/stdc++.h>

// https://dmoj.ca/problem/ccc00s4

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);


int main() {
    fast
    scann(M);
    scann(N);
    
    vi arr;
    vi dp(5280);

    FR(i, N) {
        scann(x);
        arr.push_back(x);
    }

    FR(i, 5280) {
        dp[i] = -1;
    }

    dp[M] = 0;
    
    for(int i = M - 1; i >= 0; i--) {
        for(int j = 0; j < N; j++) {
            int n = i + arr[j];
            int val = dp[n];

            if(val >= 0 && val != -1) {
                dp[i] = dp[n] + 1;
            }
        }
    }



    return 0;
}