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
int max = 1e7;
for (int i=0;i<n;i++){
	for (int j=i+1;j<n;j++){
		int sum = a[i]+a[j];
		if (abs(sum)< abs(max))
		max = sum;
	}
}
cout << max << endl;
	}
	return 0;
}