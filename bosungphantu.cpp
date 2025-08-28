#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >>n;
		int a[n];
		map < int , bool > mp;
		for (int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]= true;
		}
		sort (a, a+ n);
		int cnt = 0;
		for (int i = a[0];i< a[n-1];i++){
			if (mp[i]==false)
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}