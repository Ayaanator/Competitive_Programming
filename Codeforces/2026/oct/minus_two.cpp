// https://codeforces.com/problemset/problem/2259/B

#include <iostream>
using namespace std;

void solve() {
    int n; 
    int odd = 0;
    int two = 0;
    int four = 0;

    cin >> n;
    for (int i = 0, x; i < n; i++) {
      cin >> x;
      
      if(x % 4 == 0) {
        four++;
      } else if(x % 2 == 0) {
        two++;
      } else {
        odd++;
      }
    }
    cout << max(odd, max(two, four)) << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}