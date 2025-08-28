#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
   if (a.size() != b.size())
   return a.size() > b.size();
   return a > b;
}
string xuly(string &s){
	int cnt = 0;
    for (int i = 0;i<s.size();i++){
    	if ( s[i] == '0' ){
    		cnt++;
		}
		else break;
	}
	if (cnt == s.size())
	return "0";
	else {
		s.erase(0,cnt);
	}
	return s;
}
int main(){
		string s;
		cin >> s;
		for (int i = 0;i <s.size();i++){
			if(isalpha (s[i]))
			s[i] = ' '; 
		}
		stringstream ss(s);
		string token;
		vector <string > v;
		while (ss >> token){
			v.push_back(xuly(token));
		}
	   sort (v.begin(),v.end(),cmp);
	   cout << v[0];
	return 0;
}