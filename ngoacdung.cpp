/*Halcyon - ngoac dung*/
#include<bits/stdc++.h>
using namespace std;
int n;
void sol(string s,int left, int right) {
	if(left) {
		sol(s+"(",left-1,right);
	}
	if(right> left) {
		sol(s+")",left,right-1);
	}
	if(!right) {
		cout << s<<"\n";
	}
}
main(){
cin >> n;
sol("",n,n);
}

