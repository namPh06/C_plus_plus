#include <bits/stdc++.h>
using namespace std;
int n;
int a[21], visited[21];
void backtrack(int pos){
	if (pos > n){
		for (int i=1;i<=n;i++)
			cout << a[i]<<" ";
		cout << endl;
			return;
	}
	for (int i=1;i<=n;i++){
		if (!visited[i]){
			a[pos] = i;
			visited[i] = 1;
			backtrack(pos + 1);
			visited[i] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
	memset (visited ,0,sizeof (visited));
	cin >> n;
	backtrack(1);
	cout << endl;
}
	return 0;
}
