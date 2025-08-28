#include <bits/stdc++.h>
using namespace std;
int const mod = 1000000007;
long long  f(int n){
	if (n==1)
	return 1;
	if (n == 2)
	return 1;
	return 2*f(n-1) + 3*f(n-2) % mod;
}
int main(){
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}