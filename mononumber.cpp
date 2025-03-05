#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1e9 + 7;
 
// Hàm tính (base^exp) mod mod theo phuong pháp luy th?a nh? phân
long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    while(q--){
        int l, r, b;
        cin >> l >> r >> b;
 
        // N?u b == 1 thì m?i s? mod 1 d?u b?ng 0 => dáp án luôn là 1.
        if(b == 1) {
            cout << 1 << "\n";
            continue;
        }
 
        // Tính s: s? du?c t?o thành khi n?i các s? a[l] ... a[r] v?i co s? 10,
        // và m: t?ng s? ch? s?
        long long s = 0;
        int m = 0;
        // Tính tru?c các giá tr? 10 mod b và 100 mod b d? t?i uu, vì a[i] ch? có 1 ho?c 2 ch? s?.
        int factor10 = 10 % b;
        int factor100 = (10LL * 10LL) % b; // ho?c 100 % b
        for (int i = l; i <= r; i++) {
            int d = (a[i] < 10 ? 1 : 2);
            int factor = (d == 1 ? factor10 : factor100);
            s = (s * factor + a[i]) % b;
            m += d;
        }
 
        // Tính a_val = 10^m mod b
        long long a_val = pow_mod(10, m, b);
 
        if(a_val == 1) {
            // Tru?ng h?p a_val == 1, ta có N_k = s * k mod b.
            // N?u s mod b == 0 thì ngay k = 1 dáp ?ng, ngu?c l?i k t?i thi?u là b / gcd(s, b)
            if(s == 0)
                cout << 1 << "\n";
            else {
                long long g = __gcd(s, b);
                long long k = b / g;
                cout << k % MOD << "\n";
            }
        }
        else {
            // Tru?ng h?p a_val != 1, dãy s? theo công th?c truy h?i:
            // N_1 = s, N_k = (a_val * N_{k-1} + s) mod b.
            // Ta dùng phuong pháp “cycle detection” (dùng unordered_set) d? phát hi?n vòng l?p.
            long long N = s % b; // N_1
            if(N == 0) { // N?u ngay N_1 = 0
                cout << 1 << "\n";
                continue;
            }
            unordered_set<int> seen;
            seen.insert(N);
            int k = 1;
            while(true) {
                k++;
                N = (N * a_val + s) % b;
                if(N == 0) {
                    cout << k % MOD << "\n";
                    break;
                }
                if(seen.count(N)) { // N?u g?p l?i s? du, t?c có chu k? và không bao gi? d?t 0
                    cout << -1 << "\n";
                    break;
                }
                seen.insert(N);
            }
        }
    }
 
    return 0;
}

