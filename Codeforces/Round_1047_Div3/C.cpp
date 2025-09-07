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

void solve() {
    
}

int main() {
    fast

    scann(t);
    int maximum = -1;

    FR(i, t){
        maximum = -1;

        int a, b;
        cin >> a >> b;
        int k = b;

        if(((a * k) + (b / k)) % 2 == 0) {
            maximum = ((a * k) + (b / k));
        }

        for(int i = 2; i <= b / 2; i++) {
            if (((a * i) + (b / i)) % 2 == 0) {
                maximum = max(((a * i) + (b / i)), maximum);
            }
        }

        // (a * k) + (b / k)
        cout << maximum << endl;
    }

    return 0;
}