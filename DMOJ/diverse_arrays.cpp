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

const int MN = 1e6 + 1; 
ll N, K;
int arr[MN], freq[MN];

void solve() {
    
}

int main() {
    fast

    int res = 0;
    int ctr = 0;

    cin >> N >> K;

    FR(i, N) scan(arr[i]);
    
    int l = 0, r = 0;
    for(int l = 0 , r = 0; r<N; r++){

        if(freq[arr[r]] == 0) {
            freq[arr[r]]++;
            res++;

            while(res <= K && l < r) {
                ctr += N - r;
                l++;
                freq[arr[l - 1]]--;
                freq[arr[l]]++;

                if (freq[arr[l]] == 1) {
                    res++;
                }

                if (arr[arr[l - 1]] == 0) {
                    res--;
                }
            }

        } else {
            freq[r]++;
        }
    }

    cout << ctr << endl;

    return 0;
}