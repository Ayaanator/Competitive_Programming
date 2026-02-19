#include <bits/stdc++.h>

using namespace std;

#define local freopen("ZZZinput.txt", "r", stdin);
#define fast std::sync_with_stdio(0), cin.tie(0);
#define ll long long

int main() {
  
  ll A = 0; ll B = 0; ll K = 0; int T = 0;
  cin >> A >> B >> K >> T;
  
  ll diff = abs(A - B);
  ll bhops = diff / K;

  ll first = 0; ll second = 0;

  ll test_1 = abs(diff - (bhops * K + K));
  ll test_2 = abs(diff - (bhops * K));

  if(test_1 < test_2) {
    first = (bhops + 1) + abs(diff - (bhops * K + K));
    second = (bhops) + abs(diff - (bhops * K));
  } else {
    second = (bhops + 1) + abs(diff - (bhops * K + K));
    first = (bhops) + abs(diff - (bhops * K));
  }

  T == 1 ? cout << first << "\n" : cout << second << "\n";

  return 0;
}
