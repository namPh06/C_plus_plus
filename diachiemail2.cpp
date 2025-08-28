#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    	map <string,int> mp;
    while (t--){
    	string s;
    	getline(cin,s);
    
    	for (int i=0;i < s.length();i++){
    		s[i]=tolower (s[i]);
		}
    	stringstream ss(s);
    	string token;
    	vector <string> v;
    	string res = "";
    	
    	while (ss >> token){
    	  v.push_back(token);
		}
		res += v[v.size()-1];
	    for (int i=0;i<v.size()-1;i++){
	    res += v[i][0];
		}
		if (mp[res] ==0){
			cout << res <<"@ptit.edu.vn"<<endl;
		}
		else{
			cout << res << mp[res] + 1<<"@ptit.edu.vn"<<endl;
			
		}
		mp[res]++;
	}
	return 0;
}