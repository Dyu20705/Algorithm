/*Halcyon - Phep xoay ma tran*/
#include<bits/stdc++.h>
using namespace std;
main(){
int n, m, a;
cin >> n >> m >> a;
vector<vector<int>> x(n, vector<int>(m));
for(int i = 0; i < n; i++) 
for(int j = 0; j < m; j++) 
cin >> x[i][j];
int ang=(a%360+360)%360,st = ang / 90,r,c;
if (st % 2 == 0) {
    r = n;
   	c = m;
} else {
    r = m;
    c = n;
}
vector<vector<int>> y(r, vector<int>(c));
switch(st) {
    case 0:
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                y[i][j] = x[i][j];
            }
        }
        break;
    case 1:
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                y[j][n - 1 - i] = x[i][j];
            }
        }
        break;
    case 2:
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                y[n - 1 - i][m - 1 - j] = x[i][j];
            }
        }
        break;
    case 3:
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                y[m - 1 - j][i] = x[i][j];
            }
        }
        break;
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << setw(6) << y[i][j];
        }
        cout << endl;
    }
}

