#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i = 0 ;i < n;i++){
			cin >> a[i];
		}
		for (int i=0;i<k;i++){
			int b, c ;
			cin >> b >> c;
			b--;
			c--;
			int sum = 0;
			for (int j=b;j<=c;j++){
				sum += a[j];
			}
			cout << sum << endl;
		}
		
	}
	return 0;
}