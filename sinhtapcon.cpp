//sinhtapcon
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin >> n;
	string a(n,'0');
	cout << a<<endl;
	for(int i=0;i<pow(2,n)-1;i++){
		for(int j =0;j<n;j++){
			if(a[j]=='1'){
				a[j]='0';
			}
			else{
				a[j]='1';
				break;
			}
		}
		cout << a<<endl;
	}
}
