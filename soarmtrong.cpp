#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		for (int i = 0;i<n;i++){
			cin >> a[i];
		}
		long long tmp = a[1] - a[0];
		int ok = 0;
		for (int i = 2 ;i<n;i++){
			if (a[i] - a[i-1] != tmp){
				ok = 1;
				break;
			}
		}
		if (ok == 0) 
		cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}