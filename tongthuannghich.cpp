#include <bits/stdc++.h>
using namespace std;
long long check (long long n){
	long long res = 0; long long m = n;
	while (n!=0){
		res =res*10 + n%10;
		n/=10;
	}
	if (m == res)
	return 1;
	return 0;
}
int main(){ //45 //495 //49500 //495000 // 49500000 //495000000 //49500000000 // 495000000000 // 
	int t;
	cin >> t;
	while (t--){
	int n;
	cin >> n;
	long long r = pow(10,n) - 1;
	long long l = pow (10,n-1);
	long long sum = 0;
	for(int i = l;i<=r;i++){
		if (check(i))
		sum += i;
     }
     cout << sum << endl;
	 }
	 return 0;
}