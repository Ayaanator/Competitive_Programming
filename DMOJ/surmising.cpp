// https://dmoj.ca/problem/ccc20s1

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

int main() {
  fast 
  scann(N);
  vector<pair<int, int>> obs(N);

  FR(i, N) cin >> obs[i].first >> obs[i].second;

  sort(obs.begin(), obs.end());

  double max_speed = 0.0;

  for (int i = 1; i < N; i++) {
    int dt = obs[i].first - obs[i - 1].first;
    int dx = abs(obs[i].second - obs[i - 1].second);
    double speed = (double)dx / dt;
    max_speed = max(max_speed, speed);
  }

  cout << fixed << setprecision(1) << max_speed << "\n";

  return 0;
}