#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
			
		}
		multimap < int , int > mp;
		for (int i=0;i<n;i++){
			mp.insert(make_pair(abs(k-a[i]),a[i]));
		}
		for (pair <int ,int > it : mp){
			cout << it.second <<" ";
		}
		cout << endl;
	}
	return 0;
}