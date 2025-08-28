#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		string t = "084";
		int index = s.find(t);
		string ans = s.erase(index,3);
		cout << ans << endl;
	}
	return 0;
}