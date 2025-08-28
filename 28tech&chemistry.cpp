#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <pair<string,int>> v(100);
	for (int i = 0;i<10;i++){
		cin >> v[i].first >> v[i].second; 
	}
	int n;
	cin >> n;
	while (n --){
     string s;
     cin >> s;
	vector <string > v1;
	vector <int > v2;
	long long ans = 0;
     for (int i = 0;i<s.size();i++){
     	if (isdigit(s[i])){
     	v2.push_back(s[i] - '0');
     	s[i] =' ';
      }
	 }
	stringstream ss(s);
	string token;
	while (ss >> token){
		v1.push_back(token);
	}
	for (int i = 0;i < v1.size();i++){
		if (v1[i] == "Al")
		ans += v2[i]* 27;
		if (v1[i] == "Ca")
		ans += v2[i]* 40;
		if (v1[i] == "F")
		ans += v2[i] *19;
		if (v1[i] == "H")
		ans += v2[i] * 1;
		if (v1[i] == "He")
		ans += v2[i] * 4;
		if (v1[i] == "K")
		ans += v2[i] * 39;
		if (v1[i] == "N")
		ans += v2[i] * 14;
		if (v1[i] == "O")
		ans += v2[i] * 16;
		if (v1[i] == "P")
		ans += v2[i] * 31;
		if (v1[i] == "S")
		ans += v2[i] * 32;
	}
	cout <<  ans << endl;
}
return 0;
}