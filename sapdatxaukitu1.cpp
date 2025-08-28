#include <bits/stdc++.h>
using namespace std;
void solve (string s){
	
	int a[26]={0};
	for (char x: s){
		a[x - 'a']++;
	}
	int ans = *max_element(a,a+26);
	if (s.size() - ans >= ans - 1)
	cout <<"1\n";
	else cout << "0\n";
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		solve(s);
	}
	return 0;
}