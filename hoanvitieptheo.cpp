/* Halcyon - Hoan vi tiep theo */
#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;cin >> a;
    /*
    if (next_permutation(a.begin(), a.end())) {
        cout << a << endl; 
    } */
    int n = a.size(),i=n-2;
    while(i>=0&&a[i]>=a[i+1]){
    	i--;
	}
	if(i<0){
		cout << "KHONG CO HOAN VI TIEP THEO";
		return 0;
	}
	int j = n - 1;
    while (a[j] <= a[i]) {
        j--;
    }
    swap(a[i], a[j]);
    reverse(a.begin() + i + 1, a.end());
    cout << a;
}

