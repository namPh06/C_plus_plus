#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		set <int > se;
		for (int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		vector <int > v;
		for (int x : se){
			v.push_back(x);
		}
		for (int i=0;i<n;i++){
			auto it = upper_bound(v.begin(),v.end(),a[i]);
			if (it != v.end()){
				cout << *it <<" ";
			}
			else cout <<"_"<<" ";
		}
		cout << endl;
	}
return 0;
}