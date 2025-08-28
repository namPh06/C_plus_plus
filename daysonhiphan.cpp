#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		for (int i=0;i<n;i++){
			cin >> b[i];
		}
		int res = 0;
		
		for (int i=0;i<n;i++){
			int sum1 = 0;
			int sum2 = 0;
			for (int j=i;j<n;j++)
			{
			sum1 += a[j];
			sum2 += b[j];
			if (sum1 == sum2)
			res = max (res,j-i+1);
			
		}
		}
		cout << res << endl;
	}
	return 0;
}