#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
    fast
    
    string input;
    cin >> input;

    if(input == "red") {
        cout << "SSS";
    } else if(input == "blue") {
        cout << "FFF";
    } else if(input == "green") {
        cout << "MMM";
    } else {
        cout << "Unknown";
    }

    return 0;
}