#include <bits/stdc++.h>
using namespace std;
long long du (string s,long long m){
	long long r = 0;
	for (char x : s){
		r = r * 10 + (x - '0');
		r %= m;
	}
	return r;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		long long m;
		cin >> m;
		cout << du (s,m) << endl;
	}
	return 0;
}