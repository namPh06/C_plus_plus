#include <bits/stdc++.h>
using namespace std;
int prime [1000001];
int nt (int n){
	if ( n < 2)
	return 0;
	for (int i = 2; i<= sqrt(n);i++)
	if (n % i == 0)
	return 0;
	return 1;
}
int check (int n){
	while (n!= 0){
		n /= 10;
		if ( n == 0)
		break;
		if (!nt(n))
		return 0;
	}
	return 1;
}
void seive (){
	for (int i=0;i<= 1000000;i++){
		prime [i]=1;
		
	}
	prime[0]=prime [1]=0;
	for (int i=2;i<sqrt(1000000);i++){
		if (prime[i]){
			for (int j=i*i;j<=1000000;j+=i){
				prime [j]=0;
			}
		}
	}
}N
int main(){
	seive();
	int a,b;
	cin >> a >> b;
	int ok = 0;
	for (int i = a;i<= b;i++){
		if(prime[i] && check(i)){
		cout << i <<" ";
		ok = 1;
	}
	}
	if (ok == 0)
	cout <<"28tech";
	return 0;
}