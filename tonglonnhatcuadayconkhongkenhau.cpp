#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		long long ans = a[0];
		long long sum = 0;
		long long res;
		for (int i=1;i<n;i++){
			res = max(ans,sum);
			ans = sum + a[i];
			sum = res;
		}
		cout << max (ans,sum) << endl;
	}
	return 0;
}