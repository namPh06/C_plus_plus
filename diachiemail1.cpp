#include <bits/stdc++.h>
using namespace std;
string to_lower(string s){
	for (int i=0;i<s.size();i++){
		s[i]=tolower (s[i]);
	}
	return s;
}
int main(){
	string s;
	getline (cin,s);
	stringstream ss(s);
	string token;
	vector <string > v;
	while (ss >> token){
		v.push_back(token);
	}
	string ten = to_lower(v[v.size()-1]);
	string res = "";
	for (int i=0;i<v.size()-1;i++){
		res += tolower(v[i][0]);
	}
	cout <<ten << res << "@ptit.edu.vn";
	return 0;
}