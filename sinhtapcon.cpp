//sinhtapcon
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin >> n;
	string a(n,'0');
	cout << a<<endl;
	for(int i=1;i<1 << n;i++){
		for(int j = n - 1; j >= 0; j--){
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
