#include <bits/stdc++.h>
using namespace std;

void inmt(vector<vector<int>>& grid, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(6) << grid[i][j];
        }
        cout << endl;
    }
}

void xoay90am(vector<vector<int>>& grid, int& n, int& m) {
    vector<vector<int>> griD(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            griD[m - j - 1][i] = grid[i][j];
        }
    }
    grid = griD;
    swap(n, m);  // Sau khi xoay, c?p nh?t l?i kích thu?c
}

void xoay90duong(vector<vector<int>>& grid, int& n, int& m) {
    vector<vector<int>> griD(m, vector<int>(n));
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            griD[j][n - 1 - i] = grid[i][j];
        }
    }
    grid = griD;
    swap(n, m);  // Sau khi xoay, c?p nh?t l?i kích thu?c
}

int main() {
    int n, m, alp;
    cin >> n >> m >> alp;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int g = alp / 90; 
    g = (g % 4 + 4) % 4;  // Ð?m b?o giá tr? g là trong kho?ng [0, 3]

    if (g == 0) {
        inmt(grid, n, m);
    } else {
        for (int i = 0; i < g; i++) {
            if (alp > 0) {
                xoay90duong(grid, n, m);  // Xoay theo chi?u kim d?ng h?
            } else {
                xoay90am(grid, n, m);  // Xoay ngu?c chi?u kim d?ng h?
            }
        }
        inmt(grid, n, m);
    }

    return 0;
}

