#include <bits/stdc++.h>
using namespace std;
string to_lower(string &s){
	for (int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	fstream fi1,fi2;
	fi1.open ("DATA1.in");
	fi2.open ("DATA2.in");
	string s,x;
	set <string > se;
	map <string,int > mp1,mp2;
	while (fi1 >> s){
		se.insert(to_lower(s));
		mp1[s]++;
	}
	while (fi2 >> x){
		se.insert(to_lower(x));
		mp2[x]++;
	}
	fi1.close();
	fi2.close();
	for (string x : se){
		cout << x <<" ";
	}
	cout << endl;
	for (auto it: mp1){
		if (mp2[it.first])
		cout << it.first <<" ";
	}
	return 0;
}