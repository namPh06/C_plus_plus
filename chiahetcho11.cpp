#include <bits/stdc++.h>
using namespace std;

long long du (string a , long long m){
	long long r = 0;
	for (char x : a){
		r = r * 10 + x- '0';
		r %= m;
	}
	return r;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		if (du(s,11)==0)
		cout <<"1\n";
		else cout <<"0\n";
	}
	return 0;
}