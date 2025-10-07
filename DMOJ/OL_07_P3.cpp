// https://dmoj.ca/problem/btoi07p3

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
ll arr[MX];
ll freq[MX];

void solve() {
    
}

int main() {
    fast
    scann(n);
    scann(m);
    scann(c);

    scanArr(arr, n);

    deque<int> mn;
    deque<int> mx;

    for(int i = 0; i < n; i++) {
        while(!mn.empty() && arr[mn.front()] > arr[i]) mn.pop_front();
        while(!mn.empty() && arr[mn.front()] < arr[i]) mn.pop_front();
        mn.push_back(i);
        mx.push_back(i);

    }
    
    return 0;
}
