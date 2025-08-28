#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n>>x;
		int a[n];
		set <int > se;
		for (int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		int check;
		int ok = 0;
	for (int i=0;i<n;i++){
		check = x + a[i];
		if (se.find(check)!= se.end())
		ok = 1;
	}
	if (ok == 0)
	cout <<"-1\n";
	else cout <<"1\n";
	}
	return 0;
}