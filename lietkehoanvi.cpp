/*Halcyon - liet ke hoan vi*/
#include<bits/stdc++.h>
using namespace std;
int n,x[9], used[9] = {0};
void sol(int k) {
	if(k == n) {
		for(int i=0;i<n;i++) {
			cout << x[i];
		}cout << "\n\n";
	}
	else {
		for(int i=1;i<=n;i++) {
			if(!used[i]) {
				used[i] = 1;
				x[k] = i;
				sol(k + 1);
				used[i] = 0; 
			}
		}
	}
}
main(){
cin >> n;
sol(0);
}

