// https://dmoj.ca/problem/smac08c1p3

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (a); i >= (b); --i)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define SZ(v) ((int) (v).size())

const int MX = 1e6 + 1;
int arr[MX];
int dp[MX];
int N = 0;

void solve() {
    
}

int main() {
    fast

    scann(N);
    scann(D);
    D++;

    for(int i = 0; i < N; i++) {
        scann(x);
        arr[i] = x;
        dp[i] = x;
    }

    int score = arr[0];
    dp[0] = arr[0];

    deque<int> mn;

    for(int i = 1; i < D; i++) {
        dp[i] += dp[0];

        while(!mn.empty() && dp[mn.back()] > dp[i]) mn.pop_back();        
        mn.push_back(i);
        if(mn.front() == i - D) mn.pop_front();
    }

    for(int i = D; i < N; i++) {
        if(mn.front() == i - D) mn.pop_front();
        dp[i] = arr[i] + dp[mn.front()];
        
        while(!mn.empty() && dp[mn.back()] > dp[i]) mn.pop_back();        
        mn.push_back(i);
    }

    for(int i = 0; i < N; i++) {
        cout << dp[i] << " ";
    }

    cout << endl;

    return 0;
}