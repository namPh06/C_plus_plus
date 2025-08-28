#include <bits/stdc++.h>
using namespace std;
int a[100],n,k;
void inkq(){
	for (int i=1;i <= k;i++){
		cout << a[i];
	}
	cout <<" ";
}
void backtrack (int pos){
	for (int i = a[pos - 1] + 1 ; i <= n - k + pos;i++){
		a[pos] = i;
		if (pos == k){
			inkq();
		}
		else backtrack(pos + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
	cin >> n >> k;
	backtrack(1);
	cout << endl;
}
	return 0;
}