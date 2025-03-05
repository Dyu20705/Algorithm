/*Halcyon*/
#include<bits/stdc++.h>
using namespace std;
set<int> solve(int n) {
	stack<int> s;
	set<int> res;
	s.push(n);
	res.insert(n);
	while(s.size()>0) {
		int u = s.top();
		s.pop();
		for(int i =1;i*i<=u;i++){
			if(u%i==0) {
				int v = (i-1)*(u/i+1);
				if(res.find(v) == res.end()) {
					s.push(v);
					res.insert(v);
				}
			}
		}
	}
	return res;
}
main(){
int n;cin >> n;
set<int> res = solve(n);
for(int i: res) {
	cout << i << " ";
}
}

