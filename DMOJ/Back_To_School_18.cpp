#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/bts18p2

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

int to_num(char c)  {
    return int(c) - 97;
}

char to_char(int n) {
    return char(97 + n);
}

int main() {
    fast

    cout << int(' ');

    string sentence;
    getline(cin, sentence);
    vector<vi> freq;

    FR(i, sentence.size()) {
        if(int(sentence[i]) != 32) {
            
        }
    }

    scann(Q);

    FR(i, Q) {

    }

    return 0;
}