
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

void solve() {
  string s;
  cin >> s;
  string result;

  char sign = 'N';
  string temp;
  int sum = 0;

  for(auto c : s) {
    int x = int(c);

    if(x >= 65 && x <= 90) {
      if(sign == 'N') {
        result += c;
      }
      else {
        if(sign == '+') {
          sum += stoi(temp);
        } else {
          sum -= stoi(temp);
        }

        temp = "";
        sign = 'N';
        result += c;
      }
    } else if (x >= 97 && x <= 122) {
        if(sign != 'N') {
          if(sign == '+') {
            sum += stoi(temp);
          } else {
            sum -= stoi(temp);
          }

          temp = "";
          sign = 'N';
        }
    }
    
    if(c == '-' && sign == '-') {
      sum -= stoi(temp);

      temp = "";
      sign = '-';
    } else if (c == '-' && sign == '+'){
      sum += stoi(temp);

      temp = "";
      sign = '-';
    } else if(c == '-') {
      sign = '-';
    }

    if(x >= 48 && x <= 57) {

      if(sign == 'N') {
        sign = '+';
      }

      temp += c;
    }
  }

  if(sign != 'N') {
    if(sign == '+') {
      sum += stoi(temp);
    } else {
      sum -= stoi(temp);
    }

    temp = "";
    sign = 'N';
  }

  result += to_string(sum);
  cout << result << endl;
}

int main() {
  fast 
  
  scann(N);
  FR(i, N) {
    solve();
  }

  return 0;
}