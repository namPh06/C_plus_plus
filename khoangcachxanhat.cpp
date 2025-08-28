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
		int ans = 0;
		for (int i=0;i<n;i++){
			for (int j = n-1;j>=i;j--)
			{
			if ( j-i <= ans )
			break;
			if (a[i] <= a[j])
			ans = max (ans, j-i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}