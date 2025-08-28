#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long k;
		cin >> k;
		long long sum = 0;
		for (int i=1;i<=n;i++){
		sum += i % k;	
		}
	cout << sum << endl;}
			
	return 0;
}