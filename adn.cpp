/*Halcyon - adn*/
#include<bits/stdc++.h>
using namespace std;
int n;string a,b;
set<string> st;
void sol(int k, string s) {
	if(k == n) {
		st.insert(s);
		return;
	}
	sol(k+1,s+a[k]);
	sol(k+1,s+b[k]);
}
main(){
cin >> n >> a >> b;
sol(0,"");
cout << st.size()<<endl;
for(string str: st) {
	cout << str<<"\n";
}
}
