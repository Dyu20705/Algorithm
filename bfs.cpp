#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>& input, vector<bool>& visited, int s){
	queue<int> q;
	visited[s] =1;
	q.push(s);
	while(!q.empty()){
		int temp = q.front();
		q.pop();
		cout << temp <<" ";
		for (int i = 0; i < input[temp].size(); i++) {
            if (!visited[input[temp][i]]) {
            	visited[input[temp][i]] = 1;
                temp.push(input[temp][i]);
            }
        }
	}
}
int main() {
    vector<vector<int>> input = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<bool> visited(input.size(), 0);
    bfs(input, visited, 0);
    return 0;
}
