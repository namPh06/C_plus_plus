#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	map <int , int > mp;
	while (t--){
		int n;
		cin >> n;
		vector < int > v;
	
		for (int i=2;i<=sqrt(n);i++){
			
			while (n % i==0){
			v.push_back(i);
				n/= i;
			}
		}
		if (n!=1){
			v.push_back (n);
		}
	
		for (int x : v){
			mp[x]++;
		}
       if (v.size()==3 && v[0]!= v[1]&&v[1]!=v[2])
       cout <<"1\n";
       else cout <<"0\n";
	}
	return 0;
}