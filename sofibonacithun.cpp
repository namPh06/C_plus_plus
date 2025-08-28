#include <bits/stdc++.h>
using namespace std;
long long fibo(int n){
	if (n == 1)
	return 1;
	if (n==2)
	return 1;
	return fibo(n-1) + fibo(n-2);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << fibo(n)<<endl;
	}
	return 0;
}