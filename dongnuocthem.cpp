/*Halcyon - Ðong nu?c*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pt;
map<pt, pt> p;
void path(pt v) {
    if (v.first == 0 && v.second == 0) {
        return;
    }
    path(p[v]);
}
main() {
    int n, m, k;
    cin >> n >> m >> k;
    queue<pt> Q;
    map<pt, int> M;
    Q.push({0, 0});
    M[{0, 0}] = 0;
    
    while (!Q.empty()) {
        int x = Q.front().first, y = Q.front().second, z = x + y;
        Q.pop();
        
        pt Next[] = {{0, y}, {n, y}, {x, 0}, {x, m}, {max(0, z - m), min(m, z)}, {min(z, n), max(0, z - n)}};
        
        for (pt t : Next) {
            if (M.find(t) == M.end()) {
                M[t] = M[{x, y}] + 1;
                p[t] = {x, y};
                Q.push(t);
                
                if (t.first == k || t.second == k) {
                    cout << M[t];
                    path(t);
                    return 0;
                }
            }
        }
    }
    cout << "Khong dong duoc nuoc";
}
