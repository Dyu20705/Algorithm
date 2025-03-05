/*Halcyon - phan tich so thanh tong*/
#include<bits/stdc++.h>
using namespace std;
int n,dem;
void try(int *x,int k,int t) {
	if(t == n) {
		for(int i =1;i<=k;i++){
			cout << x[i]<<(i<k?"+":"=");
		}cout << "\n";
		dem++;
	}
	else {
		for(int x[k] = x[k-1];x[k]<=n-t;x[k]++) {
			try(x,k+1,t+x[k]);
		}	
	}
	/*
	vector<int> dp(n+1, 0);
	dp[0] =1;
	for(int i=1;i<=n;i++){
		for(int j = i;j<=n;j++) {
			dp[j] += dp[j-i]; 
		}
	}
	return dp[n];
	*/
}
main(){
int t;
cin >> t;
while(t--) {
	dem=0;
	int x[1000] = {1};
	int n; cin >>n;try(x,1,dem);
	cout << "\n" <<dem;
}
}

