#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		int cnt = 0;
		vector < long long > v;
		for (int i=0;i<n;i++){
			cin >> a[i];
			if (a[i]!=0)
			v.push_back(a[i]);
			else cnt ++;
		}
		for (int i=0;i<cnt;i++){
			v.push_back(0);
		}
		for (int i= 0;i<v.size();i++){
			cout << v[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}