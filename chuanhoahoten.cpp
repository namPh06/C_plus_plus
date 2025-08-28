#include <bits/stdc++.h>
using namespace std;
void chuanhoa1(string &s){
	s[0]= toupper(s[0]);
	for (int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	
}
string chuanhoa2(string s){
	for (int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
	return s;
}
int main(){
	string s;
	getline (cin,s);
	stringstream ss(s);
	string token;
	vector < string > v;
	while (ss >> token){
		v.push_back(token);
	}
	string ten = chuanhoa2(v[v.size()-1]) ;
	for (int i=0 ;i<v.size()- 1;i++){
		chuanhoa1(v[i]);
		cout << v[i] ;
	if (i==v.size()-2)
	cout << ", ";
	else cout <<" ";	
		}
cout << ten ;
}