/*Halcyon - Phan vung anh*/
#include<bits/stdc++.h>
using namespace std;
int a[201][201] = {1}, n, m;
int dfs(int u, int v) 
{
	int dem = 1;
	stack<pair<int,int>> s;
	a[u][v] = 1;
	s.push({u,v});
	while(!s.empty()) {
		u = s.top().first;
		v = s.top().second;
		s.pop();
		for(int i =-1 ;i<=1;i++) {
			for(int j=-1;j<=1;j++) {
				if(u+i>=1&&j+v>=1&&u+i<=n&&v+j>=m&&a[u+i][v+j] == 0) {
					a[u+i][v+j] =1;
					s.push({u+i,v+j});
					d++;
				}
			}
		}
	}
	return d;
}
main()
{
int n,m; cin >> n >> m;
fill()
for(int i =1;i<=n;i++) {
	for(int j =1;j<=m;j++) {
		cin >> a[i][j];
	}
}
for(int i =0;i<=n+1;i++) {
	for(int j =0;j<=m+1;j++) {
		a[i][0] = a[n+1][i] = 1;
	}
}
}

