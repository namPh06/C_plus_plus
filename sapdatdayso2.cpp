#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int k,n;
		cin >> k >> n;
		int a[k][n];
		vector <int > mp;
		for  (int i=0;i<k;i++){
			for (int j=0;j<n;j++){
				cin >> a[i][j];
				mp.push_back(a[i][j]);
			}
		}
		sort(mp.begin(),mp.end());
		for (int i=0;i<mp.size();i++){
			cout << mp[i]<<" ";
			mp[i]=0;
		}
		cout << endl;
	}
	return 0;
}