/*Halcyon - Thang may than ky*/
#include<bits/stdc++.h>
using namespace std;

int bfs(int n, int k, int m, int s, int f) {
	map<int, int> Map;
	queue<int> q;
	q.push(s);
	Map[s] =1;
	while(!q.empty()) {
		int a = q.front();
		q.pop();
		if(a+k<=n&&a+k>0&& Map.find(a+k) == Map.end()) {
			q.push(a+k);
			Map[a+k] = Map[a]+1;
			if(a+k==f) return Map[a];
		} 
		if(a-m<=n&&a-m>0&&Map.find(a-m) == Map.end()) {
			q.push(a-m);
			Map[a-m] = Map[a]+1;
			if(a-m==f) return Map[a];
		} 
	}
	return -1;
}
main(){
int n,k,m,s,f;cin >> n>>k>>m>>s>>f;
cout<< bfs(n,k,m,s,f);
}

