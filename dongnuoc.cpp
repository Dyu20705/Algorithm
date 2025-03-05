	/*Halcyon - Dong nuoc*/
	#include<bits/stdc++.h>
	using namespace std;
	int bfs(int n,int m,int k) {
		queue<pair<int,int>>q;
		q.push({0,0});
		map<pair<int,int>,int> M;
		M[{0,0}] =1;
		while(!q.empty()) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			int t= x+y;
			pair<int,int > next[] = {{0,y},{n,y},{x,0},{x,m},{max(0,t-m),min(t,m)},{min(t,n),max(0,t-n)}};
			for(auto z: next) 
			if(M[z] ==0) 
			{
				q.push(z);M[z] = M[{x,y}] +1;
				if(z.first == k ||z.second == k) return M[z]-1;
			}
		}
		cout << "\nKhong dong duoc";
	}
	main(){
	int n,m,k;cin >> n>>m>>k;
	cout << bfs(n,m,k);
	}

