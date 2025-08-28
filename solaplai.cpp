#include <bits/stdc++.h>

using namespace std;
long long _gcd(long long a,long long b){
	while (b!=0){
		long long r = a% b;
		a  = b;
		b = r;
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a,x,y;
		cin >> a >> x>> y;
		long long ucln = _Ogcd(x,y);
		for (long long i = 0;i<ucln;i++){
			cout << a ;
		}
		cout << endl;
	}
	return 0;
}