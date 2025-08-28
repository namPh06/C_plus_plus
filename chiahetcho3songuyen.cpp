#include <bits/stdc++.h>
using namespace std;
long long gcd(int a,int b){
	while (b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
long long bcnn(int a,int b){
	return a*b / gcd (a,b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int x,y,z,n;
		cin >> x >> y >> z >> n;
		long long l = pow(10,n-1);
		long long r = pow(10,n)-1;
         int bc = bcnn(bcnn(x,y),z);
         if (bc > r)
         cout <<"-1\n";
         else if (l % bc == 0)
         cout << l << endl;
         else {
         	long long d = l/bc;
         	cout << bc *(d+1)<<endl;
		 }
	}
	return 0;
}