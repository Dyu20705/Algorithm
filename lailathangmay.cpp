/*Halcyon - Lai la thang may*/
#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],visited[100001] = {0},res = INT_MAX;
int bfs(int n,int k,int s,int f) {
	visited[s] = 1;
	queue<int> q;
	q.push(s);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for(int num: a) {
			int x = u+num;
			if(x >0&&x<=n&&!visited[x]) {
				visited[x] = 1;
				b[x] = b[u] +1;
				if(x == f) res = min(res,b[f]);
				q.push(x);
			}
		}
	}
	return res == INT_MAX? -1 : res;
}
main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n,k,s,f;cin >> n >> k;
for(int i =0;i<k;i++) {
	cin >> a[i];
}
cin >> s >> f;
cout <<bfs(n,k,s,f);
}

