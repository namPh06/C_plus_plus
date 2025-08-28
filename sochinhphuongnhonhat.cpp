#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector <long long > v;
	for (int i = 1;i<=sqrt(n);i++){
		if (n % i == 0){
			v.push_back(i);
			if (i != n/i)
			v.push_back(n/i);
		}
	}
	long long ans = 1e18;
	for (long long  x : v){
		long long res = x * x;
		if (res % n == 0){
		ans = min( ans , res);
	}
	}
	cout << ans;
	return 0;
}