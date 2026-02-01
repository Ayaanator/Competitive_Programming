// https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FR(i, n) for(int i = 0; i < (n); i++)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define local freopen("zDAT.txt", "r", stdin);

int main() {
  fast

  int n;
  cin >> n;

  vector<pair<int, int>> movies;

  FR(i, n) {
    int x, y;
    cin >> x >> y;
    movies.push_back({y, x});
  }

  sort(movies.begin(), movies.end());
  
  int ctr = 1;
  int last_movie = 0;

  for(int i = 1; i < n; i++) {
    if(movies[i].second >= movies[last_movie].first)  {
      ctr++;
      last_movie = i;
    }
  }

  cout << ctr << "\n";

  return 0;
}