	/*Halcyon - Chao K59*/
	#include<bits/stdc++.h>
	using namespace std;
	main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	vector<int> a(n), left(n, -1), right(n, -1);
	for(int i =0;i<n;i++){
		cin >> a[i];
	}
	vector<int> st;
	for (int i = 0; i < n; i++){
	        while (!st.empty() && a[st.back()] <= a[i])
	            st.pop_back();
	        if (!st.empty())
	            left[i] = st.back();
	        st.push_back(i);
	}
	st.clear();
	for (int i = n - 1; i >= 0; i--){
	        while (!st.empty() && a[st.back()] <= a[i])
	            st.pop_back();
	        if (!st.empty())
	            right[i] = st.back();
	        st.push_back(i);
	}
	for (int i = 0; i < n; i++){
	        int li = left[i], ri = right[i];
	        if (li == -1 && ri == -1)
	            cout << -1 << " ";
	        else if (li == -1)
	            cout << ri << " ";
	        else if (ri == -1)
	            cout << li << " ";
	        else
	            cout << ((i - li) <= (ri - i) ? li : ri) << " ";
	}
	}

