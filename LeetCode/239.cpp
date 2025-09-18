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

vi maxSlidingWindow(vi nums, int k) {
    deque<int> q;
    vector<int> res;

    for(int i = 0; i < nums.size(); i++) {
        while(!q.empty() && nums[q.back()] <= nums[i]) {
            q.pop_back();
        }

        q.push_back(i);

        if(q.front() == i - k) {
            q.pop_front();
        }

        if(i >= k - 1) {
            res.push_back(nums[q.front()]);
        }
    }

    return res;
}

int main() {
    fast

    vi res = maxSlidingWindow({ 1, 3, -1, -3, 5, 3, 6, 7 }, 3);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    cout << "\n";

    return 0;
}