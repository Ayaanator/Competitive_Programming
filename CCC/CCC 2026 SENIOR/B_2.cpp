#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define local freopen("ZZZinput.txt", "r", stdin);
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
  fast
  
  int N = 0; int L = 0; int Q = 0;
  cin >> N >> L >> Q;

  vector<pair<int, int>> lights;
  vector<bool> spots(N + 1, false);

  for (int i = 0; i < L; i++) {
    int P = 0; int S = 0;
    cin >> P >> S;

    spots[P] = true;
    if(S == 0) continue;

    int start = P - S;
    int end = P + S;

    if(start < 1) start = 1;
    if(end > N) end = N;
    bool combined = false;

    for(int i = 0; i < lights.size(); i++) {
      /*if(start <= lights[i].second && start >= lights[i].first) {
        if(end >= lights[i].second) lights[i].second = end;
        combined = true;
      }

      if(end >= lights[i].first && end <= lights[i].second) { 
        if(start <= lights[i].first) lights[i].first = start;
        combined = true;
      }

      if(start <= lights[i].first && end >= lights[i].second) { 
        lights[i].first = start;
        lights[i].second = end;
        combined = true;
      }*/

      if((start >= lights[i].first && start <= lights[i].second)  || (end >= lights[i].first && end <= lights[i].second)) {
        lights[i].first = min(start, lights[i].first);
        lights[i].second = max(end, lights[i].second);
        combined = true;
      }
    }

    if(!combined) {
      lights.push_back({start, end});
    }
  }

  for(int i = 0; i < Q; i++) {
    int X = 0;
    cin >> X;
    bool flag = false;

    for(auto l : lights) {
      if(X >= l.first && X <= l.second) {
        cout << "Y\n";
        flag = true;
        break;
      }
    }

    if(spots[X] == true && flag == false) {
      cout << "Y\n";
    } else if(!flag) { 
      cout << "N\n"; 
    }
  }
  
  return 0;
}
