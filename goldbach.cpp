/*Halcyon*/
#include <bits/stdc++.h>
using namespace std;
vector<int> sang(int n) {
    vector<int> ngt;
    vector<bool> S(n + 1, true);
    S[0] = S[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (S[i]) {
            for (int j = i * i; j <= n; j += i) {
                S[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (S[i]) {
            ngt.push_back(i);
        }
    }
    return ngt;
}
int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> ngt = sang(n);
    for (int i = 0; i < ngt.size(); i++) {
        for (int j = i; j < ngt.size(); j++) {
            int a = n - ngt[i] - ngt[j];
            if (a < ngt[j]) break; 
            if (binary_search(ngt.begin(), ngt.end(), a)) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

