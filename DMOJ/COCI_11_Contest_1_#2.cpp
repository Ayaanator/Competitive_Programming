#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/coci11c1p2

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

void print()
{
    
}

int main() {
    fast

    scann(N);
    vector<vi> arr(N, vi(N));
    vector<vi> pr(N, vi(N));
    vector<vi> pl(N, vi(N));

    scanArr2D(arr, N, N);

    int prev = 0;
    int i = N - 1;
    int j = 0;

    FR(i, N) {
        FR(j, N) {
            if(i == 0) {
                pr[i][j] = arr[i][j];
            } else if (j == 0) {
                pr[i][j] = arr[i][j];
            } else {
                pr[i][j] = pr[i - 1][j - 1] + arr[i][j];
            }
        }
    }

    
    FR(i, N) {
        FORR(j, N - 1, 0) {
            if (i == 0) {
                pl[i][j] = arr[i][j];
            } else if (j == N - 1) {
                pl[i][j] = arr[i][j];
            } 
            
            
            else {
                pl[i][j] = pl[i - 1][j + 1] + arr[i][j];
            }
        }
    }

    /*
    cout << endl;
    
    FR(i, N) {
        FR(j, N) {
            cout << pr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    FR(i, N) {
        FR(j, N) {
            cout << pl[i][j] << " ";
        }

        cout << endl;
    }*/

    int mx = 0;

    FOR(size, 2, N + 1) {
        FR(i, N - size + 1) {
            FR(j, N - size + 1) {
                int A = 0;
                int B = 0;

                if(i == 0 || j == 0) {
                    A = pr[i + (size - 1)][j + (size - 1)];
                } else {
                    A = pr[i + (size - 1)][j + (size - 1)] - pr[i - 1][j - 1];
                }

                if (i == 0 || j + size == N) {
                    B = pl[i + (size - 1)][j];
                }
                else {
                    B = pl[i + (size - 1)][j] - pl[i - 1][j + size];
                }

                int beauty = A - B;
                mx = max(beauty, mx);
            }
        }
    }

    cout << mx << endl;

    return 0;
}
