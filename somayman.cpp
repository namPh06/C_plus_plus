#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
;	while (t--){
		string s;
		getline (cin,s);
	   if (s[s.size()-1]-'0'==6&&s[s.size()-2]-'0'==8)
	   cout << "1\n";
	   else cout << "0\n";
	}
	return 0;
}