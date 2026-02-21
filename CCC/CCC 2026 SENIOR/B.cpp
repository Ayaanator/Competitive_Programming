#include <bits/stdc++.h>

using namespace std;

#define local freopen("ZZZinput.txt", "r", stdin);
//#define fast std::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
  //fast
  
  int N = 0; int L = 0; int Q = 0;
  cin >> N >> L >> Q;

  vector<pair<int, int>> lights(L + 1);
  vector<bool> spots(N + 1, false);

  for (int i = 0; i < L; i++) {
    int P = 0; int S = 0;
    cin >> P >> S;

    spots[P] = true;
    if(S == 0) continue;

    int con1 = (P + S);
    for (int i = P; i <= con1 && i < N; i++) {
        spots[i] = true;
    }

    int con2 = (P - S);
    for (int i = P; i >= con2 && i >= 0; i--) {
        spots[i] = true;
    }
  }

  for(int i = 0; i < Q; i++) {
    int X = 0;
    cin >> X;

    spots[X] == true ? cout << "Y\n" : cout << "N\n";
  }
  
  return 0;
}
