#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/dwite12c2p2

typedef vector<int> vi;
typedef long long ll;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])
#define SZ(v) ((int) (v).size())

int to_num(char c) {
    return int(c) - 65; 
}

char to_char(int n) {
    return char(65 + n); 
}

int main() {
    fast
    

    string a, b;
    cin >> a >> b;

    int sum = 0;
    string result = "";

    FR(i, a.size()) {
        result += to_char((to_num(a[i]) + to_num(b[i])) % 26);
    }

    cout << result;

    return 0;
}