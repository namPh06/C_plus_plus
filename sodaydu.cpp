#include <bits/stdc++.h>
using namespace std;
int check (string s){
	if (s[0]=='0')
	return -1;
	set < char > se;
	for (char x : s)
	{
		if (!isdigit(x))
		return -1;
		se.insert(x);
	}
	if (se.size()==10)
	return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		if (check(s)==-1)
		cout << "INVALID\n";
		else if (check(s)==1)
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}