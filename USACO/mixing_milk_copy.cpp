#include <bits/stdc++.h>
using namespace std;

//
// ======================= TYPE ALIASES =======================
//
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

//
// ========================= MACROS ===========================
//

// Iteration
#define FR(i, n)         for (int i = 0; i < (n); ++i)
#define FOR(i, a, b)     for (int i = (a); i < (b); ++i)
#define FORR(i, a, b)    for (int i = (a); i >= (b); --i)

// Containers
#define ALL(v)           begin(v), end(v)
#define SZ(v)            ((int)(v).size())
#define pb               push_back
#define fs               first
#define sd               second

// Input / Output helpers
#define scan(x)          cin >> x
#define scann(x)         int x; cin >> x
#define scanArr(arr, n)  FR(i, n) scan(arr[i])
#define scanArr2D(arr, n, m) FR(i, n) FR(j, m) scan(arr[i][j])

// Misc
#define ms(a, x)         memset(a, x, sizeof(a))

// File I/O
#define r(file)          freopen(file, "r", stdin)
#define w(file)          freopen(file, "w", stdout)

//
// ======================== CONSTANTS =========================
//
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

const string FILENAME = "mixmilk";              // e.g., "input1" USACO SPECIFIC
const string LOCAL_FILE = "zDAT.txt";    // Local Data file

//
// ========================= DEBUG ============================
//
#ifdef LOCAL
    #define local freopen(LOCAL_FILE.c_str(), "r", stdin)

    #define dbg(x)           cerr << #x << " = " << (x) << endl
    #define dbgArr(arr, n)   { cerr << #arr << ": "; FR(_i, n) cerr << (arr)[_i] << " "; cerr << endl; }
    #define dbgArrP(arr, n)  { cerr << #arr << ": "; FR(_i, n) cerr << "(" << (arr)[_i].fs << "," << (arr)[_i].sd << ") "; cerr << endl; }
    #define dbg2D(arr, m, n) { cerr << #arr << ":\n"; FR(i, m) { FR(j, n) cerr << arr[i][j] << " "; cerr << endl; } }
#else
    #define dbg(x)
    #define dbgArr(arr, n)
    #define dbgArrP(arr, n)
    #define dbg2D(arr, m, n)
#endif

//
// ======================== CONFIG ============================
//
void config() {
    #ifdef LOCAL
            local;
    #else
        //USACO Config
        if (!FILENAME.empty()) {
            string fin = FILENAME + ".in";
            string fout = FILENAME + ".out";
            r(fin.c_str());
            w(fout.c_str());
        }
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    #endif
    }
    
//
// ========================= SOLVE ============================
//
void helper(     ) {
    // helper function

}

void solve() {
    // your problem logic here
    vpii buckets(3);

    FR(i, 3) {
        scann(c);
        scann(m);

        buckets[i] = {c, m};
    }
   
    FR(i, 100) {
        
        int current_bucket = i % 3;
        int next_bucket = (i + 1) % 3;
        int added_milk = buckets[current_bucket].second + buckets[next_bucket].second;

        if(added_milk > buckets[next_bucket].first) {
            buckets[next_bucket].second = buckets[next_bucket].first;
            buckets[current_bucket].second = added_milk - buckets[next_bucket].first;
        } else {
            buckets[next_bucket].second = added_milk;
            buckets[current_bucket].second = 0;
        }

        dbg(added_milk);
        dbgArrP(buckets, 3);
    }

    cout << buckets[0].second << "\n" << buckets[1].second << "\n" << buckets[2].second << "\n";

}

//
// ========================= MAIN =============================
//
int main() {
    config();
    solve();
    return 0;
}