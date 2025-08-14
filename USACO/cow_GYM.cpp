#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check_pair(vector<vector<int>> c, int c1, int c2) {

    bool flag = true;

    for (auto ranking : c) {
        int idx1 = find(ranking.begin(), ranking.end(), c1) - ranking.begin();
        int idx2 = find(ranking.begin(), ranking.end(), c2) - ranking.begin();
        
        if (idx1 > idx2)  
            flag = false;
    }

    return flag;
}

int main() {

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int K = 0;
    int N = 0;
    int consistent = 0;
    cin >> K >> N;

    vector<vector<int>> cows(K, vector<int>(N));

    for(int i = 0; i < K; i++) {
        for(int j = 0; j < N; j++) {
            cin >> cows[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(check_pair(cows, i, j) && i != j) {
                consistent++;
            }
        }  
    }

    /*for(int i = N - 1; i >= 0; i--) {
        for(int j = N - 1; j >= 0; j--) {
            if(check_pair(cows, j, i) && i != j) {
                consistent++;
            }
        }  
    }*/

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(check_pair(cows, j, i) && i != j) {
                consistent++;
            }
        }  
    }

    cout << consistent;

    return 0;
}