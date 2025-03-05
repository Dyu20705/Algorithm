/*Halcyon - Robot*/
#include<bits/stdc++.h>
using namespace std;

main(){
int x,y;cin >> x >> y;
set<xy> s;
dfs(x,y,s);
cout << s.size();
}

