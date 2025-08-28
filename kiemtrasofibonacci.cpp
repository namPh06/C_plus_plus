#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
	
		long long f[100];
		f[0]=0;
		f[1]=1;
		for (int i=2;i<=92;i++){
			f[i]=f[i-1]+f[i-2];
		}
          int ok = 0;
		for (int i=0;i<=92;i++){
			if (f[i] == n)
			{
			ok = 1;
			break;}
		}
		
		if (ok == 1)
		cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}