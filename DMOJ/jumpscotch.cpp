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
int res[MX];
int N = 0;

void solve() {
    
}

int main() {
    fast

    scann(N);
    scann(D);

    scanArr(arr, N);
    int score = arr[0];

    deque<int> q;

    for(int i = 1; i < N; i++) {
        while(!q.empty() && arr[q.back()] >= arr[i]) q.pop_back();
        
        q.push_back(i);

        if(q.front() == i - D) q.pop_front();
        if(i >= D - 1) res.push_back(nums[q.front()]);
        
    }

    return 0;
}