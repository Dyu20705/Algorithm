#include <bits/stdc++.h>
using namespace std;
main(){
    int K, N, M;
    cin >> K >> N >> M;
    vector<int> a(K);
    for (int i = 0; i < K; i++) cin >> a[i];
    vector<vector<int>> g(N + 1);
    for (int i = 0; i < M; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }
    
    vector<int> cnt(N + 1, 0);
    function<void(int, vector<bool>&)> dfs = [&](int u, vector<bool>& vis){
        vis[u] = true;
        for (int v : g[u])
            if (!vis[v])
                dfs(v, vis);
    };
    
    for (int b : a){
        vector<bool> vis(N + 1, false);
        dfs(b, vis);
        for (int i = 1; i <= N; i++)
            if (vis[i]) cnt[i]++;
    }
    
    int ans = 0;
    for (int i = 1; i <= N; i++)
        if (cnt[i] == K)
            ans++;
    cout << ans;
}
