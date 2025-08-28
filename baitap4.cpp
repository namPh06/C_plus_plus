#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int k;
	cin >> k;
	set <int > se;
	for (int i = 1;i<= k;i++){
		int ans = n % i;
		if (se.count (ans)){
			cout <<"No";
			return 0;
		}
		se.insert(ans);
	}
	cout <<"Yes";
	return 0;
}