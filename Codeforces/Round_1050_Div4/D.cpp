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
    
}

int main() {
    fast

    scann(t);
    while (t--) {
        vector<long long> even, odd;
        long long d = 0;
        long long x;
        bool on = false;

        scann(n);

        FR(i, n) {
            cin >> x;
            
            if(x % 2 == 0) {
                even.push_back(x);
            } else {
                odd.push_back(x);
            }
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        if(odd.size() == 0) {
            d = 0;
        } else if(odd.size() == 1 && even.size() == 0) {
            d = odd[0];
        } else {
            bool run = true;

            while(run) {
                run = (!even.empty() || !odd.empty());

                if(!run) {
                    break;
                }

                if(!on) {
                    if(odd.empty()) {
                        run = false;
                    } else{
                        on = !on;

                        if (on) {
                            d += odd.back();
                        }
                        
                        odd.pop_back();
                    }
                } else {
                    if(!even.empty()) {
                        d += even.back();
                        even.pop_back();
                    }
                    else if (!odd.empty()) {
                        on = !on;

                        if(on) {
                            d += odd.back();
                        }

                        odd.pop_back();
                    }
                }
            }
        }

        /*cout << "Even numbers: ";
        for (int num : even) {
            cout << num << " ";
        }
        cout << endl;

        cout << "Odd numbers: ";
        for (int num : odd) {
            cout << num << " ";
        }*/

        cout << d << endl;
    }

    return 0;
}