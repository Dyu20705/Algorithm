#include <bits/stdc++.h>
using namespace std;
const int MAX = 100005;
long long a[MAX];
void solve() {
    for (int i = 1; i < MAX; i += 2) { 
        for (int j = i; j < MAX; j += i) {
            a[j] += i;
        }
    }
    for (int i = 1; i < MAX; i++) {
        a[i] += a[i - 1];
    }
}
main() {
    int n;
    cin >> n;
    solve();
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        cout << a[y] - a[x - 1] << endl;
    }
}

