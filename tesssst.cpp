/*Halcyon*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
main(){
int a,b;cin >> a>> b;
cout << gcd(a,b);
}

