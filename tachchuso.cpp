#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		long long sum = 0;
		for (int i=0;i<s.size();i++){
			if(isdigit(s[i]))
			sum += s[i]-'0';
		}
		string a = to_string (sum);
		for (int i=0;i<s.size();i++){
			if (isdigit(s[i]))
			s[i] = ' ';
		}
		stringstream ss(s);
		char token;
		multiset <char > se;
		while (ss >> token){
		se.insert(token);
		}
		for (char x : se){
			cout << x;
		}
		cout << a;
		cout << endl;
	}
	return 0;
}