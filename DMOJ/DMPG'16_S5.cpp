// https://dmoj.ca/problem/dmpg16s5

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

const int MX = 200000;
int arr[MX];
int prefix[MX];

int main() {
    local

    scann(N);
    scann(K);

    FR(i, N) {
        scann(x);
        arr[i] = x;
        arr[i + N] = x;
    }

    prefix[0] = arr[0];

    for(int i = 1; i < N * 2; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    deque<int> mn;
    int mx = -1;

    FR(i, N * 2) {
        while(!mn.empty() && prefix[mn.back()] > prefix[i]) mn.pop_back();        
        mn.push_back(i);
        if(!mn.empty() && mn.front() <= i - K) mn.pop_front();

        mx = max(mx, prefix[i] - prefix[mn.front()]);
    }

    cout << mx << endl;

    return 0;
}