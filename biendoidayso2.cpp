#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int b[n];
		cout << a[0]*a[1]<<" ";
		for (int i=1;i<n-1;i++){
			b[i]=a[i-1]*a[i+1];
		}
		for (int i=1;i<n-1;i++){
			cout << b[i]<<" ";
		}
		cout << a[n-2]*a[n-1];
		cout << endl;
	}
	return 0;
}