#include <bits/stdc++.h>
using namespace std;
bool check (string s){
	for (int i=0;i<s.size()/2;i++){
		if (s[i]!=s[s.size()-i-1])
		return false;
	}
	return true;
}
void upper(string &s){
	for (int i=0;i<s.size();i++){
		s[i]= toupper (s[i]);
	}

}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		upper(s);
		for (int i=0;i<s.size();i++){
			if (s[i]=='A'|| s[i]=='B'|| s[i]=='C')
			s[i] = '2';
		else if (s[i]=='D'|| s[i]=='E'|| s[i]=='F')
			s[i] = '3';
				else if (s[i]=='G'|| s[i]=='H'|| s[i]=='I')
			s[i] = '4';
				else if (s[i]=='J'|| s[i]=='K'|| s[i]=='L')
			s[i] = '5';
				else if (s[i]=='M'|| s[i]=='N'|| s[i]=='O')
			s[i] = '6';
				else if (s[i]=='P'|| s[i]=='Q'|| s[i]=='R'||s[i]=='S')
			s[i] = '7';
				else if (s[i]=='T'|| s[i]=='U'|| s[i]=='V')
			s[i] = '8';
				else if (s[i]=='W'|| s[i]=='X'|| s[i]=='Y'||s[i]=='Z')
			s[i] = '9';
		}
      
		if (check (s))
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}