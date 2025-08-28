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
int main(){
	int t;
	cin >> t;
	while (t--){
		long long l,r;
		cin >> l >> r;
		int cnt = 0;
		for (int i=sqrt(l);i<=sqrt(r);i++){
			if (nt (i))
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}