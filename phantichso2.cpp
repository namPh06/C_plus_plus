#include <bits/stdc++.h>
using namespace std;
int a[50], X[4] = {0,10,20,50};
int sum = 0,cnt = 0;
int n = 100;
void backtrack(int pos){
	if (sum >= n){
		if (sum == n){
			for (int i=1;i <= pos - 1;i++)
			cout << a[i] << " ";
		}
		return ;
	}
	for (int i=1;i<=3;i++){
		a[pos] = X[i];
		sum += X[i];
		backtrack(pos + 1);
		sum -= X[i];
	}
}
int main(){
	backtrack(1);
	return 0;
}