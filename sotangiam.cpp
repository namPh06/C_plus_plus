#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if (n < 2)
	return 0;
	for (int i=2;i<=sqrt(n);i++)
	if (n % i==0)
	return 0;
	return 1;
}
int tang (int n){
	int d = 10;
	while (n != 0){
		if ( d<= n %10)
		return 0;
		d = n %10;
		n /=10;
	}
	return 1;
}
int giam (int n){
	int d = -1;
	while (n !=0){
	if (d >= n %10)
		return 0;
	d = n %10;
	n /=10;
}
return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int cnt = 0;
		int l = pow(10,n-1);
		int r = pow (10,n)-1;
		for (int i=l;i<=r;i++){
			if (tang(i)||giam(i))
			if (nt(i))
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}