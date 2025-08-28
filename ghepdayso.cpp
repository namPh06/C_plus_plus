#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[k];
		vector < int > v;
	   while (n--){
	   	for (int i=0;i<k;i++){
	   		cin >> a[i];
	   		v.push_back(a[i]);
		   }
	   }
	   sort (v.begin(),v.end());
	   for (int x : v){
	   	cout << x << " ";
	   }
	   cout << endl;
	}
	return 0;
}