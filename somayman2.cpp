#include <bits/stdc++.h>
using namespace std;
bool check(string s){

	while (s.size()>=2){
		long long sum = 0;
		for (int i=0;i<s.size();i++){
			sum += s[i] - '0';
		}
		s = to_string (sum);
	}
	if (s == "9")
	return true;
	return false ;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		if (check(s))
		cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}