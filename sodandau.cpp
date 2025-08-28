#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		vector <int > v;
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int max = 0;
		for (int i = n-1;i>=0;i--){
			if (a[i]>=max)
			{
			v.push_back(a[i]);
			max = a[i];
		}
		}
		for (int i=v.size()-1;i>=0;i--){
			cout << v[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}