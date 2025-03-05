/*Halcyon - Canh cua than ky*/
#include<bits/stdc++.h>
using namespace std;
string bfs(long n) {
	queue<pair<string,long>> q;
	q.push({"dangdungcntt",1});
	q.push({"tienquanutc",1});
	q.push({"quang123",1});
	q.push({"maianh",1});
	q.push({"nguyenminhduc2820",1});
	while(n>q.front().second) {
		n-=q.front().second;
		long ts =2*q.front().second;
		string ten = q.front().first;
		q.pop();
		q.push({ten,ts});
	}
	return q.front().first;
}
main(){   
int n;cin >> n;
while(n--) {
	long a; cin >> a;
	cout << bfs(a) << endl;
}
}

