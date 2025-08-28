#include <bits/stdc++.h>
using namespace std;
long long nt(long long n){
	if ( n < 2)
	return 0;
	for(int i = 2;i<=sqrt(n);i++)
	if (n% i == 0)
	return 0;
	return 1;
}
long long check(long long n,long long s){
	long long sum = 0;
	while (n!= 0){
		sum += n%10;
		n /= 10;
	}
	if (sum == s)
	return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n,s;
		cin >> n >> s;
		if (nt(n) && check(n,s))
		cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}