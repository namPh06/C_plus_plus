#include <bits/stdc++.h>
using namespace std;
int solve (int n){
	vector < int > v;
	if (n==1)
	return 1;
	for (int i= 2;i<=sqrt(n);i++){
		while (n %i==0){
			v.push_back(i);
			n/=i;
		}
	}
	if (n!=1)
	v.push_back(n);
	return v[0];
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=1;i<=n;i++){
			cout << solve(i) <<" ";
		}
		cout << endl;
	}
	return 0;
}