#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin,s);
		int check = 1;
		for (int i=1;i<s.size();i++){
			if (abs(((s[i]-'0')-(s[i-1]-'0')))!=1)
			{
			check = 0;
			break;}
		}
      if (check == 0)
      cout << "NO\n";
      else cout << "YES\n";
	}
	return 0;
}