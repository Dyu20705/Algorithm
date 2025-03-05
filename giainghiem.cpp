/*Halcyon - Cac nghiem nguyen khong am cua x1+x2+...+xn = m*/
#include<bits/stdc++.h>
using namespace std;
int n,m,x[1000];
void sol(int *x,int k,int t) {
	if(k==n) for(int i =0;i<n;i++) {cout << x[i]<<"+";cout <<m-t<<"="<<m<<"\n";return;}
	for(x[k]=0;x[k]<=m-t;x[k]++) sol(x,k+1,t+x[k]);
}
main(){
cin >> n >> m;
sol(x,1,0);
}

