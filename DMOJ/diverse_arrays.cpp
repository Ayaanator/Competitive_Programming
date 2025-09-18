// https://dmoj.ca/problem/acc3p1

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
#define int ll

const int MN = 1e6 + 1; 
ll N, K;
int arr[MN], freq[MN];

int32_t main() {
    
    fast

    int res = 0;
    int ctr = 0;

    cin >> N >> K;

    FR(i, N) scan(arr[i]);

    for(int l = 0 , r = 0; r < N; r++){

        if(freq[arr[r]] == 0) {
            freq[arr[r]]++;
            res++;
            //1 1 1
            while(res >= K) {
                ctr += N - r;
                freq[arr[l]]--;

                if (freq[arr[l]] == 0) {
                    res--;
                }

                l++;
            }

        } else {
            freq[arr[r]]++;
        }
    }

    cout << ctr << endl;

    return 0;
}