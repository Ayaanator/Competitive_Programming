#include <iostream>
#include <bits/stdc++.h>

// https://codeforces.com/contest/2132/problem/B

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);
#define scanArr(arr, n)  FR(i, n) scan(arr[i])

void solve() {
    long long n;
    cin >> n;
    int solutions = 0;
    vector<long long> nums;
    long long mult = 10;

    FR(i, 19) {

        if(n % (mult + 1) == 0) {
            nums.push_back(n / (mult + 1));
            solutions++;
        }

        mult *= 10;
    }

    cout << solutions << endl;
    sort(nums.begin(), nums.end());

    if(solutions > 0) {
        for(auto c : nums) {
            cout << c << " ";
        }

        cout << endl;
    }
}

int main() {
    
    scann(t);

    while(t--) {
        solve();
    }

    return 0;
}