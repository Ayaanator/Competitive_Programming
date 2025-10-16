// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

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
#define dbgArr(arr,n) if(true){ cerr<<#arr<<": "; FR(_i,n) cerr<<(arr)[_i]<<" "; cerr<<endl; }

int knapsack(int W, vector<int> &val, vector<int> &wt) {
    int dp[wt.size()][val.size()] = {0};
}

int main() {
    fast

    vector<int> val = {1, 2, 3};
    vector<int> wt = {4, 5, 1};

    cout << knapsack(3, val, wt) << endl;

    return 0;
}