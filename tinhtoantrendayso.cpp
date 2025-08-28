#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int gcd(int a,int b){
	while (b!=0){
		int r = a%b;
		a =  b;
		b = r;
	}
	return a;
}
long long binpow1(long long a,long long b){
	if (b==0)
	return 1;
	long long res = binpow1(a,b/2);
	if (b%2==0)
	return ((res % mod) * (res % mod))%mod;
	else return (((res % mod) * (res % mod))%mod * (a %mod))%mod;
}


int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		long long tich = 1;
	long long ans = a[0];
		for (int i=1;i< n;i++){
			ans = gcd(ans,a[i]);
		}
	
		for (int i=0;i<n;i++){
			tich *= a[i];
			tich %= mod;			
		}
	cout << binpow1(tich,ans)<<endl;
	
	}
	return 0;
}