#include <bits/stdc++.h>
using namespace std;
void to_lower(string &s){
	for (int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	string s;
	cin >> s;
	to_lower(s);
	for (int i=0;i<s.size();i++){
		if (s[i] != 'a'&& s[i]!= 'e'&& s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
		cout << "."<< s[i];
	}
	return 0;
}