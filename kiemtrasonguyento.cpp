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
long long check(long long n){
	long long sum = 0;
	while (n != 0){
		sum += n%10;
		n /= 10;
	}
	if (nt(sum))
	return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
        if (nt(n) && check(n))
		cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}