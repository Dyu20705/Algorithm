/*Halcyon - hoan vi 4 */
#include<bits/stdc++.h>
using namespace std;
int n,d=0,a[21],b[21] = {0};
void sol(int k) {
	if(k == n) {
		for(int i =0;i<n;i++) {
			cout << a[i]<< " ";
		}cout << "\n";
		d++;
	}
	else {
		for(int i =1;i<=n;i++) if(!b[i])
		if(k==0||((a[k-1] + i) % 4 != 0)) {
			b[i] = 1;
			a[k] = i;
			sol(k+1);
			b[i] = 0;
		}
		
	}
}
main(){
cin >> n;
sol(0);
cout << d;
}

