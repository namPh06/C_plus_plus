#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	vector < pair <int,int >> v;
	while (t--){
		int n;
		cin >> n;
		for (int i=2;i<=sqrt(n);i++){
			if (n %i==0){
				int cnt = 0;
				while (n %i==0){
					cnt ++;
					n /=i;
				}
			v.push_back({cnt,i});
			}
			
		}
		if ( n!=1){
	v.push_back({1,n});
		}
		sort(v.begin(),v.end());
		for (auto it : v){
			cout << it.second <<" "<<it.first <<endl;
		}
	}
	return 0;
}