#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a,m;
		cin >> a >> m;
		int ans = 1e7;
		for (int i=0;i<m;i++){
			if ((i *a )%m==1)
			ans = min (ans , i);
		}
		if (ans == 1e7)
		cout << "-1\n";
		else cout << ans << endl;
	}
	return 0;
}