/*Halcyon - Vung kin*/
#include<bits/stdc++.h>
using namespace std;
int a[205][205],n,m,bor,dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
int dfs(int u, int v) {
	int d=1;
	stack<pair<int,int>> s;
	bor =1;
	a[u][v] = 1;
	s.push({u,v});
	while(!s.empty()) {
		u = s.top().first;v= s.top().second;
		s.pop();
		if(u == 1 || v == 1 || u == n || v == m) bor = 0;
		for (int k = 0; k < 4; k++) {
            int nu = u + dx[k], nv = v + dy[k];
            if(nu >= 1 && nu <= n && nv >= 1 && nv <= m && a[nu][nv] == 0) {
                a[nu][nv] = 1;
                s.push({nu, nv});
                d++;
            }
        }
	}
	return d;
}
main(){
cin >> n >> m;
for(int i = 1;i<=n;i++) {
	for(int j =1;j<=m;j++){
		cin >> a[i][j];
	}
}
int k =0;
for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++){
            if(a[i][j] == 0) {
                dfs(i, j);
                if(bor) { 
                    k++;
                }
            }
        }
    }
cout <<k;
}

