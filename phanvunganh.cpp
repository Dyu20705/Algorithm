#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> graph;
void dfs(int u, vector<bool>& vis, int skip) {
    if(u == skip) return;
    vis[u] = true;
    for (int i = 0; i < n; i++) {
        if (graph[u][i] && !vis[i])
            dfs(i, vis, skip);
    }
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    for (int cs = 1; cs <= t; cs++){
        cin >> n;
        graph.assign(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> graph[i][j];
        vector<bool> initial(n, false);
        dfs(0, initial, -1);
        vector<vector<char>> ans(n, vector<char>(n, 'N'));
        for (int i = 0; i < n; i++){
            vector<bool> vis(n, false);
            if(i != 0)
                dfs(0, vis, i);
            for (int j = 0; j < n; j++){
                if (initial[j] && (i == j || !vis[j]))
                    ans[i][j] = 'Y';
            }
        }
        cout << "Case " << cs << ":\n";
        string border = "+";
        for (int i = 0; i < 2 * n - 1; i++) border.push_back('-');
        border.push_back('+');
        cout << border << "\n";
        for (int i = 0; i < n; i++){
            cout << "|";
            for (int j = 0; j < n; j++){
                cout << ans[i][j] << (j == n - 1 ? "|" : "|");
            }
            cout << "\n" << border << "\n";
        }
    }
}

