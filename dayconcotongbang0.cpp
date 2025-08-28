#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0;i<n;i++){
			cin >> a[i];
		}
		long long sum = 0;
		unordered_map < long long ,bool > mp;
		bool check = false;
		for (int i = 0;i<n;i++){
			sum += a[i];
			if (sum == 0 || mp[sum] == true ) {
				check = true;
				break;
			}
			mp[sum] = true;
		}
		if (check == true)
		cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}