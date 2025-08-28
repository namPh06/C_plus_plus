#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector <int > v;
		for (int i = 1;i<=sqrt(n);i++){
			if (n%i==0){
				v.push_back(i);
				if (i != n/i)
				v.push_back(n/i);
			}
		}
		int ans = 0;
		for (int x : v){
			if (x % 2 != 0 && x != n){
				ans = max(ans,x);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
