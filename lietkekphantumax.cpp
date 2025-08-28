#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort (a,a+n,greater<int>());
		for (int i=0;i<x;i++){
			cout << a[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}