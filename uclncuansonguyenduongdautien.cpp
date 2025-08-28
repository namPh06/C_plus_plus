#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	while (b!=0){
		long long r = a % b;
		 a = b;
		 b = r;
		 
	}
	return a;
}
long long bcnn (long long a,long long b){
	return a*b / ucln(a,b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long  ans = 1;
	for (int i=2;i<=n;i++){
		ans = bcnn(ans,i);
	}
	cout << ans << endl;
	}
	return 0;
}