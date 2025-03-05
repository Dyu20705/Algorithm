#include<bits/stdc++.h>
using namespace std;
main() {
    int n,q;cin >> n >> q;
    vector<int> a(5*n, 0);
    for(int i =0;i<n;i++){
    	int g;cin >> g;
    	a[g]++;
	}
	for(int i =0;i<5*n;i++){
    	cout << a[i]<<" ";
	}
	long res=0; 
	while(q--){
		int x,y;cin >> x >> y;
		for(int i = x;i<=y;i++){
			res+= a[i];
		}
		cout << res<<endl;
	}
}

