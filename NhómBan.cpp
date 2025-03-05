/*Halcyon - Nhóm ban*/
#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>& sv, int n) {
	int k=0;
	vector<int> d(n + 5, 0), g(n + 5, 0);
	
	for (int i = 1; i <= n; i++) {
        if (!d[i]) {
            k++;
            d[i] = k;
            g[k] = 1;
            stack<int> s;
            s.push(i);
            
            while (!s.empty()) {
                int u = s.top();
                s.pop();
                for (int v : sv[u]) {
                    if (d[v] == 0) {
                        d[v] = k;
                        g[k]++;
                        s.push(v);
                    }
                }
            }
        }
    }
    cout << k << "\n" << *max_element(g.begin() + 1, g.begin() + k + 1);
}
main(){
int m,n;cin >> m >> n;
vector<vector<int>> sv(m + 1);
for (int i = 1; i <= n; i++) {
    int u, v;
    cin >> u >> v;
    sv[u].push_back(v);
    sv[v].push_back(u);
}
solve(sv,m);
}

