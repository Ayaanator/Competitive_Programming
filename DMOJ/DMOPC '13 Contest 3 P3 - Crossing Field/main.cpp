//https://dmoj.ca/problem/dmopc13c3p3//

using namespace std;
#include <bits/stdc++.h>
#define FR(i,n) for(int i = 0; i < n; i++)
const int MN = 1500;
typedef pair<int,int> pii;
int grid[MN][MN];
bool visited[MN][MN];

int directions[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int n,h;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> h;
    
    FR(i,n)FR(j,n)cin >> grid[i][j];

    
    queue<pii> q;
    q.push({0,0});
    visited[0][0] = true;
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        FR(i,4){
            int nx = cx + directions[i][0];
            int ny = cy + directions[i][1];

            //checking in range
            if(!(0<=nx && nx<n && 0<=ny && ny < n))continue;
            //if(0>=nx || nx>n || 0>=ny || ny > n)continue;
            //checking if visited
            if(visited[nx][ny])continue;
            //check if elevation is good 
            if(abs(grid[cx][cy] - grid[nx][ny]) > h) continue;

            q.push({nx,ny});
            visited[nx][ny] = true;
            
        }



    }

    if(visited[n-1][n-1]) cout << "yes";
    else cout << "no";
      

    return 0;
    
}