#include <bits/stdc++.h>
using namespace std;
#define lg long
lg func(lg a, lg b) {
    return a > b ? a : b;
}
main() {
    int n;
    cin >> n;
    vector<lg> a(n), l(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    lg res = 0;
    l[0] = a[0];
    partial_sum(a.begin(), a.end(), l.begin(), func);
    r[n - 1] = a[n - 1];
    partial_sum(a.rbegin(), a.rend(), r.rbegin(), func);
    for (int i = 1; i < n - 1; i++) {
        res += max(min(l[i - 1], r[i + 1]) - a[i], 0L);
    }
    cout << res;
}
