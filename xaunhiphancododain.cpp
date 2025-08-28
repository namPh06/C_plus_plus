#include <bits/stdc++.h>
using namespace std;
int n,k;
char ans[21];
bool check (){
	int sum = 0;
	for (int i=1;i<=n;i++){
		sum += ans[i];
	}
	return sum == k;
}
void backtrack(int pos){
	if (pos > n){
		for (int i=1;i<=n;i++)
		cout << ans[i];
		cout << endl;
		return;
	}
	for (char i='0';i<='1';i++){
		ans[pos]= i;
		backtrack(pos + 1);
	}
}
int main(){
	cin >> n >> k;
	if (check()){
	backtrack(1);
}
	return 0;
	
}