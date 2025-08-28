#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		long long lt = 1;
		long long r = (s[s.size()-1]-'0') % 5;
		for (long long i = s.size() - 2;i >= 0;i--){
			lt *=2;
			lt %= 5;
			r =  r + (s[i]-'0')*lt; 
			r %= 5;
		}
		if ( r == 0)
	   cout << "Yes\n";
	   else cout << "No\n";
	}
	return 0;
}