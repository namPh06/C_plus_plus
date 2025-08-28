#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	for (int i = 0 ;i <= s.size() / 2;i++){
		if (s[i] != s[s.size() - i - 1])
		return false;
	}
	return true;
}
int main(){
	string s;
	vector <string > v;
	int ans = -1e4;
	while (cin >> s){
		if (check (s))
	{
		ans = max(ans, (int)s.size());
		v.push_back (s);
	}
	}
	map <string,int > mp;
	for (string x : v){
		if (x.size() == ans)
		mp[x]++;
	}
	for (string x : v){
		if (mp[x] > 0)
		cout << x <<" " << mp[x] << endl;
		mp[x] = 0;
	}
	return 0;
}