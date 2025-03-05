/*Halcyon - Lap lich cho em y ta */
#include <bits/stdc++.h>
using namespace std;
main() {
	int a, b, c;
    cin >> a >> b >> c;
    function<void(int,int,string,int,int)> sol = [&](int k, int cnt, string s, int has0, int has1) {
        if(k == a){
            if((cnt && cnt < b) || !has0 || !has1) return;
            cout << s << "\n\n";
            return;
        }
        if(s.back() == '0') {
            sol(k+1, 1, s+"1", has0, 1);
        } else {
            if(cnt < b && cnt+1 <= c)
                sol(k+1, cnt+1, s+"1", has0, 1);
            else if(cnt < c) {
                sol(k+1, 0, s+"0", 1, has1);
                sol(k+1, cnt+1, s+"1", has0, 1);
            } else { 
                sol(k+1, 0, s+"0", 1, has1);
            }
        }
    };
    if(a){
        sol(1,0,"0",1,0);
        sol(1,1,"1",0,1);
    }
}

