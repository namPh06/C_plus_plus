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
		long long sum = 0;
		for (int i=1;i<=n;i++){
			sum += fibo(i);
		}
		cout << sum << endl;
	}
	return 0;
}