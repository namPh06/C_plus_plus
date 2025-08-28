#include <bits/stdc++.h>
using namespace std;
long long solve (long long n){
	if (n % 4 == 0) return n;
	if (n % 4 == 1) return 1;
	if (n % 4 == 2) return n + 1;
	return 0;
}
int main(){
	long long a,b;
	cin >> a >> b;
	long long ans = solve(a) ^ solve(b);
	cout << ans << endl;
	return 0;
}