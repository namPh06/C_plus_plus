#include <bits/stdc++.h>
using namespace std;
string to_lower(string s){
	for(int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
string to_upper(string s){
	s[0] = toupper(s[0]);
	return s;
}
int main(){
	string s;
	vector <string > v;
	while (cin >> s){
		s = to_lower(s);
		v.push_back(s);
	}
	int ok = 1;
	for (auto it : v){
		if (ok ){
			it = to_upper(it);
			ok = 0;
		}
		char s = it[it.size() -  1];
		if (s == '.'|| s == '?'|| s =='!'){
			it.pop_back();
			cout << it << endl;
			ok = 1;
		}
		else cout << it <<" ";
	}
	return 0;
}
