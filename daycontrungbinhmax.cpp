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
		long long sum = 0;
         int index = 0;
		for (int i=0;i<k;i++){
			sum += a[i];
		}
		long long ans = sum;
		for (int i=k;i<n;i++){
			sum = sum - a[i-k]+ a[i];
		if (sum > ans){
			ans = sum;
			index = i - k + 1;
		}
		}
		for (int i = index ;i<index + k;i++){
			cout << a[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}