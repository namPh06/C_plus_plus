#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort (a,a+n);
		int d = 0;
		for (int i=0;i<n;i+=2){
			b[i] = a[d++];
			
		}
		for (int i=1;i<n;i+=2){
			b[i]= a[d++];
		}
		for (int x : b){
			cout << x <<" ";
		}
		cout << endl;
	}
	return 0;
}