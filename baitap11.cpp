#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t; 
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0;i<n;i++){
			cin >> a[i];
		}
	    sort (a,a+n);
	    int ans1 = a[0] ;
	    int ans2 = a[1];
	    if (ans1 != ans2 )
	    cout << ans1 <<" "<< ans2 << endl;
	    else cout <<"-1" << endl;
	}
	return 0;
}