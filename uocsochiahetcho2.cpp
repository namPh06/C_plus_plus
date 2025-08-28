#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector < int > v;
		for (int i=1;i<=sqrt(n);i++){
			if (n % i==0){
			
			v.push_back(i);
			v.push_back(n/i);
		}
		}
		for (int x : v){
			cout << x <<" ";
		}
//		int cnt = 0;
//		for (int i=0;i<v.size();i++){
//		if (v[i]%2==0)
//		cnt ++;
//		}
//		cout << cnt << endl;
	}
	return 0;
}