/*Halcyon - Dinh thuc*/
#include <bits/stdc++.h>
using namespace std;
double det(vector<vector<double>> A, int n) {
    double d = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int pvt = i;
        for (int j = i + 1; j < n; j++)
            if (fabs(A[j][i]) > fabs(A[pvt][i])) pvt = j;
        if (pvt != i) {
            swap(A[i], A[pvt]);
            cnt++;
        }
        if (A[i][i] == 0) return 0;
        for (int j = i + 1; j < n; j++) {
            double f = A[j][i] / A[i][i];
            for (int k = i; k < n; k++) A[j][k] -= f * A[i][k];
        }
    }
    for (int i = 0; i < n; i++) d *= A[i][i];
    return (cnt % 2 == 0) ? d : -d;
}

int main() {
    int n;
    cin >> n;
    vector<vector<double>> A(n, vector<double>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << fixed << setprecision(2) << det(A, n);
    return 0;
}

