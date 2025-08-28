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
		int ans1 = 1e8;
		for (int i=0;i<n;i++){
			ans1 = min(ans1,a[i]);
		}
		int ok = 0;
		int ans2 = 1e8;
		for (int i=0;i<n;i++){
			if (a[i]!=ans1)
	       {
	       	ans2 = min(ans2,a[i]);
	       	ok = 1;
		   }
		}
		if (ok==1)
		cout << ans1 <<" "<<ans2<<endl;
		else cout << "-1"<<endl;
	}
	return 0;
}