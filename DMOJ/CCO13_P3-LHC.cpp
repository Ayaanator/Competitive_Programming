// https://dmoj.ca/problem/cco13p3

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

#include <bits/stdc++.h>
using namespace std;

const int MX = 500000;
vector<vector<int>> nodes(MX);

pair<int,int> dfs_far(int node, int parent, int depth) {
    pair<int,int> best = {depth, node};

    for (int nxt : nodes[node]) {
        if (nxt == parent) continue;
        auto r = dfs_far(nxt, node, depth + 1);
        if (r.first > best.first)
            best = r;
    }

    return best;
}

int main() {
    local

    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    auto p1 = dfs_far(1, -1, 1);
    auto p2 = dfs_far(p1.second, -1, 1);

    int diameter_nodes = p2.first;

    cout << diameter_nodes << "\n";
}
