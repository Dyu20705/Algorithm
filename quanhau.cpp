/*Halcyon - Quan hau*/
#include<bits/stdc++.h>
using namespace std;/*
int n;
vector<vector<int>> res;
vector<int> a, b, c;
void queens(int i) {
    if (i < n) {
        for (int j = 0; j < n; j++) {
            if (find(a.begin(), a.end(), j) == a.end() &&
                find(b.begin(), b.end(), i + j) == b.end() &&
                find(c.begin(), c.end(), i - j) == c.end()) {
                a.push_back(j);
                b.push_back(i + j);
                c.push_back(i - j);
                queens(i + 1);
                a.pop_back();
                b.pop_back();
                c.pop_back();
            }
        }
    } else {
        res.push_back(a);
    }
}
*/
int n,x[1000],dem=0;
void sol(int k) {
	if(k-1==n){
		dem++;return;
	}
	for(int i =1;i<=n;i++) {
		int ok=1;
		
	}
}
main(){
cin >> n;
queens(0);
cout << res.size();
}

