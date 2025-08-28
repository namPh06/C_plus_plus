#include <bits/stdc++.h>
using namespace std;
long long fibo(int n){
	long long fibo[94];
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2;i<93;i++){
		fibo[i]= fibo[i-1]+ fibo[i-2];
	}
	return fibo[n];
}
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

	for (int i=0;i< n;i++){
		if (a[i]==0|| a[i]==1|| a[i]==2||a[i]==3||a[i]==5||a[i]==8||a[i]==13||a[i]==21||a[i]==34||a[i]==55||a[i]==89||a[i]==144||a[i]==233||a[i]==377||a[i]==610||a[i]==987)
		cout << a[i]<<" ";
	}
		cout << endl;	
		}
		return 0;
	}
