#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
	vector < long long > v;
		for (int i=2;i<=sqrt(n);i++){
		if (n %i==0){
		v.push_back(i);
		while (n %i==0){
	
			n /=i;
		}}
		}
		if ( n!=1){
			v.push_back(n);
		}
		sort (v.begin(),v.end());
		cout << v[v.size()-1]<<endl;
	}
	return 0;
}