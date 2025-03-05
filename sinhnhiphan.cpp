/*Halcyon*/
#include<bits/stdc++.h>
using namespace std;
void btk(string ans,int n,int k,int j,int cnt){if(cnt == k){cout << ans<<endl;return;}for(int i =j;i<=n;i++){btk(ans+to_string(i)+" ",n,k,i+1,cnt+1);}}
main(){
int n,k;cin >>n>>k;string ans = "";btk(ans,n,k,1,0);
}

