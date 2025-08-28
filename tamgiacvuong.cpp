#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long  a[n];
		for (int i=0;i <n;i++){
			cin >> a[i];
		}
		vector <long long > v;
		for (long long x : a){
			long long b = x*x;
			v.push_back(b);
		}
		sort(v.begin(),v.end());
		int ok = 0;
		for (int i = n-1;i>=2;i--){
			int l = 0 , r = i - 1;
			while (l < r){
				if (v[l]+v[r]==v[i])
				{
					cout << "YES\n";
					ok = 1;
					break;
				}
				else if (v[l]+v[r]<v[i]){
					l ++;
				}
				else if (v[l]+v[r]>v[i]){
					r --;
				}
			}
		}
		if (ok == 0){
			cout << "NO\n";
		}
	}
	return 0;
}