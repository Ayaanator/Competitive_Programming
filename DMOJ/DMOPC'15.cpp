// https://dmoj.ca/src/7336356

#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef long long ll;
const int INF = 0x3f3f3f3f; const ll LLINF = 0x3f3f3f3f3f3f3f3f;
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
#define ALL(v) begin(v),end(v)
#define pb push_back
#define fs first
#define sd second
const bool DEBUG_MODE = true;
#define dbg(x) if (DEBUG_MODE) {cerr << #x << ' ' << (x) << endl;}
#define dbgArr(arr,n) if(DEBUG_MODE){ cerr<<#arr<<": "; FR(_i,n) cerr<<(arr)[_i]<<" "; cerr<<endl; }
#define dbgArrP(arr,n) if(DEBUG_MODE){ cerr<<#arr<<": "; FR(_i,n) cerr<<"("<<(arr)[_i].fs<<","<<(arr)[_i].sd<<") "; cerr<<endl; }
#define dbgArr2D(arr,m,n) if(DEBUG_MODE){ cerr<<#arr<<":\n"; FR(i,m){ FR(j,n) cerr<<arr[i][j]<<" "; cerr<<endl; } }

#define int long long
void solve() {
    
    scann(N);
    scann(K);
    vector<int> arr(N);

    scanArr(arr, N);

    deque<int> mx;
    deque<int> mn;
    int ctr = 0;

    for(int l = 0, r = 0; r < N; r++) {

        while(!mx.empty() && arr[r] > arr[mx.back()]) mx.pop_back();
        while(!mn.empty() && arr[r] < arr[mn.back()]) mn.pop_back();
        mx.push_back(r);
        mn.push_back(r);

        while(arr[mx.front()] - arr[mn.front()] > K) {
            if(!mx.empty()&& mx.front() == l) mx.pop_front();
            if(!mn.empty()&&mn.front() == l) mn.pop_front();
            l++;


        }

        ctr += (r - l) + 1;
        
    }

    cout << ctr << "\n";
}
 
int32_t main() {
    #ifdef DMOJ
        //local
    #endif

    solve();
   
 
    return 0;
}