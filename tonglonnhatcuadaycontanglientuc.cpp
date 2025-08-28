#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long a[n];
		long long ans = -1e18;
		for (int i=0;i<n;i++){
			cin >> a[i];
			ans =  max(ans,a[i]);
		}
		if (ans <= 0){
			cout << ans << endl;
		}
		else {
			long long sum = 0 , max = -1e18;
			for (int i=0;i<n;i++){
				sum += a[i];
				if (sum > max)
				max = sum;
				if (sum < 0)
				sum = 0;
			}
			cout << max << endl;
		}
		
	}
	return 0;
}