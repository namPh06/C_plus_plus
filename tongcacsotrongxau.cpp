#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		long long sum = 0;
		cin >> s;
		for (int i=0;i<s.size();i++){
			if (!isdigit(s[i]))
			s[i]= ' ';
		}
		stringstream ss(s);
		string token;
		vector < string > v;
		while (ss >> token){
			v.push_back(token);
		}
for (int i= 0 ;i<v.size();i++){
	sum += stoll (v[i]);
}
		
		
		cout << sum << endl;}
	;
}
	return 0