/*Halcyon - Phan loai cach ly covid*/
#include<bits/stdc++.h>
using namespace std;
main(){
queue<int> q;
map<int,int> mp,f;
int m,n,x,y;
cin >> n>> m;
list<int> a[n+5];
set<int> s[n+5];
while(m--) {
	cin >> x >> y;
	a[x].push_back(y);
	a[y].push_back(x);
}
cin >> f[0];
for(int i =0;i<f[0];i++) {
	cin >> x;
	q.push(x);
	s[0].insert(x);
	mp[x]=0;
}
while(q.size()) {
	int u = q.front();q.pop();
	for(int v:a[u])
	if(mp.find(v) ==mp.end()) {
		q.push(v);
		mp[v] = mp[u] + 1;
		s[mp[v]].insert(v);
		f[mp[v]]++;	}
}
for(auto fs: f) {
	cout << "\nF" << fs.first << ": "<< fs.second;
}
}

