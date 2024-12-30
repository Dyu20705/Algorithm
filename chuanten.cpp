//Chuan ten
#include<bits/stdc++.h>
using namespace std;
main(){
	/*
	char a[10001],*p=a;
	scanf("%[^\n]s ",p);
	D:
		if(*p==' ') {
			p++;goto D;
		}
		else if(*p==0)return 0;
		else {
			cout << char(toupper(*p++));
			goto T;
		}
	T:
		if(*p==' ') {
			p++;goto D;
		}
		else if(*p==0)return 0;
		else {
			cout << char(tolower(*p++));
			goto T;
		}
		*/
	string a;
	getline(cin,a);
	int p=0;
	D:	
		if(p>=a.size())return 0;
		if(a[p]==' ') {
			p++;goto D;
		}
		else {
			cout << char(toupper(a[p++]));
			goto T;
		}
	T:
		if(p>=a.size())return 0;
		if(a[p]==' ') {
			p++;goto D;
		}
		else {
			cout << char(tolower(a[p++]));
			goto T;
		}		
}
