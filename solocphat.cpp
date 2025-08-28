#include <bits/stdc++.h>
using namespace std;
int check (int n){
	while (n > 0){
		int a = n%10;
		if (a != 0 && a!=6 && a!= 8 )
		{
			return 0;
		break;
	}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (check (n))
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}