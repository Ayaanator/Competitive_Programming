#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(pair<int, int> box1, pair<int, int> box2) {
    return box1.second > box2.second ? true : false;
}

int main() {

    map<int, vector<int>> values;
    int boxes = 0;
    cin >> boxes;
    vector<pair<int, int>> volumes;

    for(int i = 0; i < boxes; i++) {
        int w = 0;
        int h = 0;

        cin >> w >> h;
        volumes.push_back({w, h});
    }

    sort(volumes.begin(), volumes.end());
    int sum = 0;
    cout << endl;

    for(auto c : volumes) {
        //cout << "width: " << c.first << " length: " << c.second << endl;
        values[c.first].push_back(c.second);
    }

    for(auto& v : values) {
        sort(v.second.begin(), v.second.end());
        //cout << "1st: " << v.first << " 2nd: " << v.second.size() << endl;
    }

    for(auto it = values.rbegin(); it != values.rend(); ++it) {
        sum += it->second[it->second.size() - 1];
    }

    cout << sum << endl;

    return 0;
}