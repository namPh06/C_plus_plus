#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline (cin,s);
		stringstream ss(s);
		string token;
		int cnt = 0;
		while (ss >> token){
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}