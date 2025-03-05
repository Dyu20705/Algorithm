/*Halcyon - Buon vang*/
#include<bits/stdc++.h>
using namespace std;
main(){
long n,res=0,z = -1e9;cin >>n;
long a[n];
for(auto &i: a){
	cin >> i;
}
for(int i=n-1;i>=0;i--){
	if(z<a[i])z=a[i];
	else res+=z-a[i];
}
cout<< res;
}

