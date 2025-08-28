#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s1;
		getline (cin,s1);
		string s2;
		getline (cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		string token ;
		set <string > se1;
		set < string > se2;
		while (ss1 >> token){
			se1.insert(token);
		}
		while (ss2 >> token){
			se2.insert(token);
		}
		for (string x : se1){
			if (se2.find(x) == se2.end())
			cout << x <<" ";
		}
		cout << endl;
	}
	return 0;
}