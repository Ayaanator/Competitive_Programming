#ifndef DMOJ
#define DMOJ

#define local freopen("zDAT.txt", "r", stdin);
#define dbg(x){cerr << #x << ' ' << (x) << endl;}
#define dbgArr(arr, n){cerr << #arr; FR(_i, n) cerr << ' ' << (arr)[_i]; cerr << endl;}
#define dbgArrP(arr, n) { cerr << #arr; for(int _i = 0; _i < (n); _i++) cerr << " (" << (arr)[_i].first << "," << (arr)[_i].second << ")"; cerr << endl; }
#define dbg2D(arr, m, n) cerr << #arr << endl; for (int i = 0; i < m; ++i) { for (int j = 0; j < n; ++j) cout << arr[i][j] << " "; cout << endl; }

#endif