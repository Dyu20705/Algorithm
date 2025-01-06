#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& input, vector<bool>& visited, int s) {
    stack<int> temp;
    temp.push(s);
    while (!temp.empty()) {
        int u = temp.top();
        temp.pop();
        if (!visited[u]) {
            cout << u << " ";
            visited[u] = 1;  
        }
        for (int i = 0; i < input[u].size(); i++) {
            if (!visited[input[u][i]]) {
                temp.push(input[u][i]);
            }
        }
    }
}
int main() {
    vector<vector<int>> input = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<bool> visited(input.size(), 0);
    dfs(input, visited, 0);
    return 0;
}

