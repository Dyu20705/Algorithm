/*Halcyon - Thap Ha Noi*/
#include <bits/stdc++.h>
using namespace std;
main(){
    int n,x,step = 1;cin >> n;
    string peg = (n % 2 == 0) ? "ABC" : "ACB";
    for (x = 1; x < (1 << n); x++){
        int disk = __builtin_ctz(x) + 1;  
        int src  = (x & (x - 1)) % 3;             
        int dest = (((x | (x - 1)) + 1) % 3);        
        cout << "Buoc" << step << " Chuyen dia " << disk 
             << " tu " << peg[src] << " sang " << peg[dest] << "\n";
        step++;
    }
}

