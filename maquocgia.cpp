#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		string res ="";
		string code ="084";
		for (int i=0;i<s.size();i++){
			if (s.substr(i,3)==code)
			i+= 2;
			else res += s[i];
		}
		cout << res << endl;
	}
	return 0;
}