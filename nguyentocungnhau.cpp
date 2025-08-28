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
int ucln(int a, int b){
	while (b!=0){
		int r = a%b;
		a = b;
		b = r;
			}
			return a;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int x;
		cin >> x;
		int cnt =0 ;
		for (int i=1;i<=x;i++){
			if (ucln(x,i)==1)
			cnt ++;
		}
		if (nt (cnt))
		cout << "1\n";
		else cout <<"0\n";
	}
}