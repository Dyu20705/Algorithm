//counting sort
#include<bits/stdc++.h>
using namespace std;
main(){
	/*
	string a;int d[300]={};
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		d[a[i]]++;
	}
	for(char i='a';i<='z';i++){
		while(d[i]--) cout << i;
	}
	*/
	char x[10001],*p=x;
	int d[300]={};
	scanf("%[^\n]s ",p);
	for(char *p=x;*p;p++){
		d[*p]++;
	}
	p = x;
	for(char i='a';i<='z';i++){
		while(d[i]--) *p++=i;
	}
	*p = '\0';
	cout << x;
}
