#include <bits/stdc++.h>

// https://dmoj.ca/problem/dph

using namespace std;

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

const int MX = 1000;
const int MOD = 1e9 + 7;
int arr[MX][MX];
int dp[MX][MX];
int H = 0;
int W = 0;

int main() {
    fast

    scan(H);
    scan(W);

    FR(i, H) {
        FR(j, W) {
            char c;
            scan(c);

            if(c == '.') {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(i == 0 && j == 0) {
                dp[0][0] = 0;
            } else if (i == 0 && j == 1) {
                if(arr[i][j] == 0) dp[i][j] = 1;
            } else if(i == 1 && j == 0) {
                if(arr[i][j] == 0) dp[i][j] = 1;
            }
            else if(arr[i][j] == 0) {
                if(i > 0) dp[i][j] = arr[i - 1][j] == 0 ? ((dp[i - 1][j] % MOD) + (dp[i][j] % MOD)) % MOD : dp[i][j];
                if(j > 0) dp[i][j] = arr[i][j - 1] == 0 ? ((dp[i][j - 1] % MOD) + (dp[i][j] % MOD)) % MOD : dp[i][j];
            }
        }
    }

    cout << dp[H - 1][W - 1] << endl;

    return 0;
}