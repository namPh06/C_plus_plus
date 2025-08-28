#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		int ans = 1e6;
		for (int i=0;i<n;i++ ){
			cin >> a[i];
			ans = min(ans,a[i]);
		}
     int ok = 0;
     for (int i=0;i<n-1;i++){
     	if (a[i]!=a[i+1])
     	ok = 1;
	 }
	 int cnt = 0;
	 for (int i=1; i <= ans ;i++){
	 	int d = a[0]%i;
	 	int dem = 0;
	 	for (int j=1;j<n;j++){
	 		if (a[j]%i !=d)
	 		break;
	 		else dem ++;
		 }
		 if (dem == n - 1)
		 cnt ++;
	 }
	 if (ok == 0)
	 cout << 0 << endl;
	 else cout << cnt << endl;
	}
	return 0;
}