#include<bits/stdc++.h>
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
	int check = 0;
	int ans;
		for (int i=0;i<n;i++){
		for (int j= 0;j<i;j++)
		{
			if (a[j]==a[i])
		{
				ans = a[i];
			check = 1;
		}
		}
		if (check == 1)
	break;
		}
		if (check == 0)
		cout << "-1"<<endl;
		else cout <<ans << endl;
	
	}
	return 0;
}