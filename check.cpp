#include <bits/stdc++.h>
using namespace std;
long long const N = 1e18;
long long hoanhao(long long n){
	vector <long long > v;
	for (int i = 1 ; i <= sqrt(n);i++){
		if ( n % i ==0 ){
			v.push_back (i);
			if ( i != n / i && n / i != n)
			v.push_back( n / i);
		}
	}
	long long sum = 0;
	for (long long x : v){
		sum += x;
	}
	if ( sum == n)
	return 1;
	return 0;
}
int main(){

	for (int i = 6 ; i <= N ;i++){
		if (hoanhao(i))
		cout << i << endl;
	}
	return 0;
}