#include <bits/stdc++.h>
using namespace std;
int mark[1000];
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		mark[a[i]] = 1;
	}
	for (int i=0;i<n-1;i++){
		cin >> a[i];
		mark[a[i]] = 0;
	}
	for (int i= 0;i<n- 1;i++){
	   if (mark[a[i]] == 1)
	   cout << a[i]<<" ";
	}
	return 0; 
}