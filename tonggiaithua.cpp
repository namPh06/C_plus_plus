#include <bits/stdc++.h>
using namespace std;
long long gt(long long n){
	long long res = 1;
	for (int i=1;i<=n;i++){
		res*= i;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	long long sum = 0;
	for (int i=1;i<=n;i++){
		sum += gt(i);
	}
	cout << sum << endl;
}