#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	getline (cin,s1);
	string s2;
	getline (cin,s2);
	stringstream ss(s1);
	string token;
	vector < string > v;
	while (ss >> token){
		v.push_back(token);
	}
	for (int i=0;i<v.size();i++){
		if (v[i]!= s2)
		cout << v[i]<<" ";
	}
	return 0;
}