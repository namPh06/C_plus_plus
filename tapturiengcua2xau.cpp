#include <bits/stdc++.h>
using namespace std;
string to_lower(string &s){
	for (int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	string s,t;
	getline (cin,s);
	getline (cin,t);
	stringstream ss1(s), ss2(t);
	string token;
	set <string > se1,se2;
	while (ss1 >> token){
		se1.insert(to_lower(token));
	}
	while (ss2 >> token){
		se2.insert(to_lower(token));
	}
	for(string x : se1){
		if (se2.find (x) == se2.end())
		cout << x <<" ";
	}
	return 0;
}