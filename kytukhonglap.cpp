#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		map < char , int > mp;
		for (int i=0;i < s.size();i++){
			mp[s[i]]++;
		}
       for (int i=0;i<s.size();i++){
       	if (mp[s[i]]==1)
       	cout << s[i] ;
	   }
	   cout <<endl;
	}
	return 0;
}