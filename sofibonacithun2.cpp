#include <bits/stdc++.h>
using namespace std;
long long fibo(int n){
	if (n <= 1)
	return 1;
	long long fibo[94] = {0};
	fibo[1] = 1;
	for (int i =2;i<= n;i++){
		fibo[i]= fibo[i-1] + fibo[i-2];
	}
	return fibo[n];
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << fibo(n) << endl;
	}
	return 0;
}