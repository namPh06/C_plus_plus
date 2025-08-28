#include <bits/stdc++.h>
using namespace std;
int cnt[1000005];
int p[1000000];
int const mod = 1000000007;
void seive(){
	for (int i = 1;i<=1000000;i++){
		p[i] = i;
	}
	for (int i = 2;i<=1000;i++){
		if (p[i] == i){
			for (int j = 2*i ; j <= 1000000;j+= i){
				p[j] = i;
			}
		}
	}
}
void pt(int n){
	while (n!= 1){
		int d = p[n];
		while (n % d == 0){
			n /= d;
			cnt[d]++;
		}
	}
}
int main(){
	    seive();
         int n,x;
		 cin >> n;
		 int a[n];
		 for (int i = 0;i<n;i++){
			cin >> a[i];
			pt(a[i]);
		 }
		 long long ans = 1;
		 for (int i = 2;i<= 1000000;i++){
			if (cnt[i] != 0){
				ans *= (cnt[i] + 1);
				ans %= mod;
			}
		 }
		 cout << ans ;
	return 0;
}