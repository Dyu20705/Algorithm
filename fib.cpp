/*Halcyon*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9;
main(){
	long n;
    cin >> n;
    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    ll prev2 = 1, prev1 = 1, curr;
    ll res = 2; 
    for (int i = 3; i <= n; i++) {
        curr = (prev1 + prev2) % MOD;
        res = (res + curr) % MOD;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << res << endl;
}

