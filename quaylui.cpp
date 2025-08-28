#include <bits/stdc++.h>
using namespace std;
int a[20] , n;
void inkq(){
	for (int i =1;i<=n;i++){
		cout << a[i]; 
	}
	cout << " ";
}
void backtrack(int pos){
	for (int i = 0;i<=1;i++){
		a[pos] = i;
		if (pos == n){
			inkq();
		}
		else backtrack(pos + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		backtrack(1);
		cout << endl;
	}
	return 0;
}