#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long x , y, p;
		cin >> x >> y >> p;
		long long sum = 1;
		while (y--)
		sum = (sum*x)%p;
		cout << sum << endl; 
	}
	return 0;
}