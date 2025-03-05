/* Halcyon - Sang*/
#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	cout << n<< endl;
	bool S[n+5];
	fill(S,S+n+1,true);
	for(int i=2;i<=n;i++) {
		if(S[i]){
			cout<<i<<endl;
			for(int j=i*i;j<=n;j+=i) S[j]=false;
		}
	}
}

