#include <bits/stdc++.h>
using namespace std;
string to_lower(string &s){
	for (int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	fstream fi;
	fi.open("VANBAN.in");
	string s;
	set <string > se;
	while (fi >> s){
		se.insert(to_lower(s));
	}
	fi.close();
	for (string x : se){
		cout << x << endl;
	}
	return 0;
}