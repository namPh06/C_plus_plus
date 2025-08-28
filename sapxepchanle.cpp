#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort (a,a+n);
		int b[n];
		int cnt = 0;
		for (int i=0;i<n;i++){
			if (i%2==0)
			v.push_back(a[i]);
		}
		for (int i =0 ;i<n;i++){
			if (i%2!=0){
				v.push_back(a[i]);
			}
		}
		for(int i=0;i<v.size();i++){
			cout << v[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}
