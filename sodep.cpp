#include <bits/stdc++.h>
using namespace std;
bool check1 (string s){
	for (int i=0;i<s.size();i++){
		if ((s[i]-'0') % 2 != 0)
		return false;
	}
	return true;
}
bool check2(string s){
	for (int i = 0;i< s.size()/2;i++){
		if (s[i] != s[s.size()-i-1])
		return false;
	return true;	
	}
	
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		if (check1(s)&&check2(s))
		cout << "YES\n";
		else cout <<"NO\n";
	}
	return 0;
}