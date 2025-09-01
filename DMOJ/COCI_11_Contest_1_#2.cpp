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
    local

    scann(n);
    const int N = 5;
    int arr[N][N];
    int pr[N][N];
    int pl[N][N];

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
            } else {
                pl[i][j] = pl[i - 1][j + 1] + arr[i][j];
            }
        }
    }

    FR(i, N)
    {
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
    }

    return 0;
}
/*
if (j == 0) {
                pr[i][j] = arr[i][j];
            } else {
                pr[i][j] = pr[i - 1][j - 1] + arr[i][j];
            }
*/