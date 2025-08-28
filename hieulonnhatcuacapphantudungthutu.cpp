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
		int ans = -1e7;
		int ok = 1;
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++)
			ans = max (ans , a[j]-a[i]);
			if (ans < 0)
			{
			ok = 0;
			break;}
		}
		if (ok == 0)
		cout << "-1"<<endl;
		else cout << ans << endl;
	}
	return 0;
}