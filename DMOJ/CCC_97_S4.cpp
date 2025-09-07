#include <bits/stdc++.h>

using namespace std;

// https://dmoj.ca/problem/ccc97s4

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
    local
    map<string, int> dict;

    scann(N);

    while(N > 0) {
        string result;
        map<string, int> dict;

        string line;
        getline(cin, line);

        stringstream ss(line);
        string word;

        if (line.empty()) {
            break;
        }

        int counter = 1;

        while(ss >> word) {
            if(dict.find(word) == dict.end()) {
                dict[word] = counter;
                counter++;

                result += word;
                result += " ";
            } else {
                result += to_string(dict[word]);
                result += " ";
            }
        }

        cout << result << endl;
    }

    return 0;
}