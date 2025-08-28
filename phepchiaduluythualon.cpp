#include <bits/stdc++.h>
using namespace std;
long long du (string a,long long m){
	long long r = 0;
	for(char x : a){
		r = r*10 + (x -'0');
		r %=m;
	}
	return r;
}
long long powpow(long long a,long long b,long long m){
	if (b == 0)
	return 1;
	if (b == 1 )
	return a % m;
	long long x = powpow(a,b/2,m);
	long long r = x*x % m;
	if ( b % 2 == 0 )
	return r;
	else return r * a % m;
	
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		long long b,m;
		cin >> b >> m;
		long long res = du(a,m);
		cout << powpow(res,b,m) << endl;
	}
	return 0;
}