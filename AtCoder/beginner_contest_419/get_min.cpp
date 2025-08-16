#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>

using namespace std;

typedef vector<int> vi;

#define FR(i, n) for(int i = 0; i < (n); i++)
#define scan(x) cin >> x
#define scann(x) int x; cin >> x
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

pair<int, int> find_min(vi x) {
    int min = 99999;
    int index = 0;

    FR(i, x.size()) {
        if(min > x[i]) {
            min = x[i];
            index = i;
        }
    }

    return { min, index};
}

int main() {
    fast
    scann(Q);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vi balls;
    vi output;

    FR(i, Q) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int num;
        vi nums;
        int count = 0;

        while(ss >> num) {
            nums.push_back(num);
            count++;
        }

        if(count == 1) {
            pair<int, int> mins = find_min(balls);
            output.push_back(mins.first);
            balls.erase(balls.begin() + mins.second);
        } else {
            FR(i, nums[0]) {
                balls.push_back(nums[1]);
            }
        }

    }

    FR(i, output.size()) {
        if(i == output.size() - 1) {
            cout << output[i];
        } else {
            cout << output[i] << endl;
        }
    }
    
    return 0;
}