//UCLN
#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b){
	if(!b)return a;
	return gcd(b,a%b);
}
int ucln(int a,int b){
	while(a-b){
		if(a>b) a-=b;
		else if(a<b) b-=a;
	}
	return a;
}
main(){
	int a=27,b=42;
	cout << gcd(a,b)<<"\n"<<ucln(a,b);
}
