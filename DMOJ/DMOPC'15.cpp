// https://dmoj.ca/problem/dmopc15c6p5

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

const int MX = 3 * 1e6;
int arr[MX];

void solve() {
    
}

int main() {
    fast

    scann(N);
    scann(K);

    scanArr(arr, N);

    deque<int> mx;
    deque<int> mn;

    for(int l = 0, r = 0; r < N; r++) {
        while(!mx.empty() && arr[mx.back()] <= arr[r]) mx.pop_back();
        mx.push_back(r);
        
        while(!mx.empty() && arr[mx.back()] >= arr[r]) mn.pop_back();
        mn.push_back(r);
        
    }

    return 0;
}