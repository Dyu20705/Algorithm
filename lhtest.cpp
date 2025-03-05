#include <iostream>
#include <vector>
using namespace std;

// H�m DFS th?c hi?n t? m?t n�t 'node'
void dfs(int node, vector<bool> &visited, vector<vector<int>> &graph, vector<int> &reachable_count) {
    visited[node] = true;
    // Khi duy?t t?i node, tang s? d?m c�c b?n c� th? d?n node d�
    reachable_count[node]++;
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, visited, graph, reachable_count);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K, N, M;
    cin >> K >> N >> M;
    
    // Kh?i t?o m?ng d?m s? b?n s?ng ? m?i con ph? (1-indexed)
    vector<int> friend_count(N + 1, 0);
    // M?ng d?m s? b?n c� th? d?n m?i con ph?
    vector<int> reachable_count(N + 1, 0);
    // Danh s�ch k? cho d? th?
    vector<vector<int>> graph(N + 1);
    
    // Luu l?i v? tr� c�c b?n s?ng v� c?p nh?t friend_count
    vector<int> friends;
    for (int i = 0; i < K; i++) {
        int street;
        cin >> street;
        friends.push_back(street);
        friend_count[street]++;
    }
    
    // �?c c�c du?ng (d? th? c� hu?ng)
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    
    // V?i m?i b?n, th?c hi?n DFS t? nh� c?a b?n d�
    for (int i = 0; i < K; i++) {
        vector<bool> visited(N + 1, false); // m?ng visited cho m?i DFS
        dfs(friends[i], visited, graph, reachable_count);
    }
    
    // T�m s? lu?ng b?n t?i da s?ng ? 1 con ph?
    int max_friend_count = 0;
    for (int i = 1; i <= N; i++) {
        if (friend_count[i] > max_friend_count) {
            max_friend_count = friend_count[i];
        }
    }
    
    // Ki?m tra c�c con ph? c� s? b?n s?ng b?ng max_friend_count v� t?t c? c�c b?n d?u c� th? d?n
    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (friend_count[i] == max_friend_count && reachable_count[i] == K) {
            result++;
        }
    }
    
    cout << result << "\n";
    return 0;
}

