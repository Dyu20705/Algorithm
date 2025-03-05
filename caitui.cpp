/* Halcyon - Bài toán cái túi */
#include <bits/stdc++.h>
using namespace std;
main() {
    int n, M;
    cin >> n >> M;
    vector<int> b(n + 1);
    vector<int> a(n + 1, 0); 
    int res = 0;
    for (int i = 1; i <= n; i++) cin >> b[i];
    while (1) {
        int T = 0;
        for (int i = 1; i <= n && T <= M; i++) {
            T += a[i] * b[i];
        }
        if (T <= M) {
            res = max(res, T);
        }
        int j = n;
        while (j > 0 && a[j] == 1) {
            a[j] = 0;
            j--;
        }
        if (j == 0) break; 
        a[j] = 1;
    }
    cout << res << endl;
}

