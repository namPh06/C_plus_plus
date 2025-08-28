#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k; 
		int a[n];
		multiset <int > se;
		for (int i = 0;i < n;i++){
			cin >> a[i];
		}
		for (int i = 0 ; i< k;i++){
			se.insert(a[i]);
		}	
		for (int i = k ; i <= n;i++){
			cout << *se.rbegin() <<" ";
			se.erase (se.find(a[i-k]));
			se.insert(a[i]);
		}
		cout << endl;
	}	
	return 0;
}