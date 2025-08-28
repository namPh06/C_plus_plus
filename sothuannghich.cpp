#include <bits/stdc++.h>
using namespace std;
long long check(long long n){
	long long res = 0;
	long long m = n;
	while (n != 0){
		res = res*10 + n%10;
		n /= 10;
	}
	if (res == m)
	return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		if (check(n))
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}