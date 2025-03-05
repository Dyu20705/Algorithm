/*Halcyon*/
#include<bits/stdc++.h>
using namespace std;
main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int N, Q;
cin >> N >> Q;  
vector<int> pos(N);
for (int i = 0; i < N; i++) {
cin >> pos[i]; 
}
sort(pos.begin(), pos.end());
while (Q--) {
int L, R;
cin >> L >> R;
int li = int(lower_bound(pos.begin(), pos.end(), L) - pos.begin());
int ri = int(upper_bound(pos.begin(), pos.end(), R) - pos.begin());
cout << (ri - li) << "\n";
}
}

