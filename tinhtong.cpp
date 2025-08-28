#include <bits/stdc++.h>
using namespace std;
int check(string s){
	for (int i=0;i<s.size();i++){
		if (s[i]>'9'||s[i]<'0')
		return 0;
	}
	if (s.size()>10)
	return 0;
	return 1;
}
int main(){
	long long sum = 0;
	fstream fi;
	fi.open("DATA.in");
	string s;
	while (fi >> s){
		if (check(s))
		sum += stoi (s);
	}
	fi.close();
	cout << sum << endl;
	return 0;
}