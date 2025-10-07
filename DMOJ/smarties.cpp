// https://dmoj.ca/problem/thicc17p5

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

    ll ctr = 0;
    ll unique = 0;
    scann(N);
    scann(K);

    scanArr(arr, N);

    for(int l = 0, r = 0; r < N; r++) {
        if(freq[arr[r]] == 0) unique++;
        freq[arr[r]]++;

      
        while(unique >= K) {
            ctr += (N - r);
            freq[arr[l]]--;
            if(freq[arr[l]] == 0) unique--;
            l++;
        }
    }

    cout << ctr << endl;
    
    return 0;
}
