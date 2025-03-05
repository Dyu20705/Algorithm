#include <bits/stdc++.h>
using namespace std;
int n, m, ans = INT_MAX, a[1001][1001], sx, sy, gx, gy, dx[4] = {-1,0,1,0}, dy[4] = {0,-1,0,1};
void dfs(int x, int y, int d) {
    if(d >= ans) return;
    if(x == gx && y == gy) { ans = d; return; }
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && !a[nx][ny]){
            a[nx][ny] = 1;
            dfs(nx, ny, d + 1);
            a[nx][ny] = 0;
        }
    }
}
main(){
cin >> n >> m;
for(int i = 1; i <= n; i++)
for(int j = 1; j <= m; j++) cin >> a[i][j];
cin >> sx >> sy >> gx >> gy; 
a[sx][sy] = 1; dfs(sx, sy, 0);
cout << (ans == INT_MAX ? -1 : ans);
}
