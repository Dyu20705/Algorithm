//Giai mau
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
const ull MOD = 1000000007ULL;
ull power(ull base, ull exp, ull mod) {
    base %= mod;
    ull res = 1;
    while (exp) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}
ull inverse(ull n, ull mod) {
    return power(n, mod - 2, mod);
}
vector<ull> precompute(ull m) {
    vector<ull> res(m + 2, 0);
    for (ull i = 1; i <= m + 1; ++i)
        res[i] = (res[i - 1] + power(i, m, MOD)) % MOD;
    return res;
}
ull solve(ull n, ull m) {
    auto pre = precompute(m);
    if (n <= m + 1) return pre[n];
    vector<ull> fact(m + 2, 1), inv_fact(m + 2);
    for (ull i = 2; i <= m + 1; ++i)
        fact[i] = fact[i - 1] * i % MOD;
    inv_fact[m + 1] = inverse(fact[m + 1], MOD);
    for (ull i = m; i >= 1; --i)
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    inv_fact[0] = 1;
    vector<ull> prefix(m + 2, 1), suffix(m + 2, 1);
    for (ull i = 0; i <= m; ++i)
        prefix[i + 1] = prefix[i] * (n - i) % MOD;
    for (ull i = m + 1; i >= 1; --i)
        suffix[i - 1] = suffix[i] * (n - i) % MOD;
    ull res = 0;
    for (ull i = 0; i <= m + 1; ++i) {
        ull term = pre[i] * prefix[i] % MOD * suffix[i] % MOD;
        term = term * inv_fact[i] % MOD * inv_fact[m + 1 - i] % MOD;
        if ((m + 1 - i) & 1) term = (MOD - term) % MOD;
        res = (res + term) % MOD;
    }
    return res;
}
main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ull m, n;
    cin >> m >> n;
    cout << solve(n, m) << endl;
}
