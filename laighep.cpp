/*Halcyon - lai ghep*/
#include<bits/stdc++.h>
using namespace std;
string a,b;s
void sol(int k) {
	if(k == 5) {
		for(char i:s) cout << i;
		cout << "\n";
		return;
	}
	
	s[k] = a[k];
	sol(k+1);
	if(b[k]!=a[k]) {
		
	s[k] = b[k];
	sol(k+1);
	}
}
main(){
cin >> a >> b;
sol(0);
}

