/*Halcyon - day con don dieu tang dai nhat*/
#include<bits/stdc++.h>
using namespace std;
int n;
int sol(int *a) {
    int* res = new int[n]; 
    int len = 0;
    for (int i = 0; i < n; i++) {
        int m = a[i];
        int *pos = lower_bound(res, res + len, m);
        if (pos == res + len) {
            res[len++] = m;
        } else {
            *pos = m;
        }
    }
    delete[] res;
    return len;
}
main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cin >> n;
int a[n+1];	
for (int i = 0; i < n; ++i) {
    cin >> a[i];
}
cout << sol(a);
}

