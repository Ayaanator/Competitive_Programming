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
    int N, K;
    
    cin >> N >> K;

    vi moves(N);
    vector<bool> dp(N);

    FR(i, N) {
        scann(x);
        moves[i] = x;
    }

    dp[0] = false;

    for (int i = 1; i <= K; i++) {
        dp[i] = false;

        for (auto x : moves) {
            int result = i - x;

            if (result > -1 && dp[i - x] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    if (dp[K]) cout << "First\n";
    else cout << "Second\n";

    return 0;
}