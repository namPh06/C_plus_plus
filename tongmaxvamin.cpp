#include <bits/stdc++.h>
using namespace std;
void max(string a , string b){
	for (char &x : a){
		if (x == '5')
		x = '6';
	}
	for (char &x : b){
		if (x == '5')
		x = '6';
	}
	cout << stoll (a) + stoll (b)<<" ";
}
void min(string a , string b){
	for (char &x : a){
		if (x == '6')
		x = '5';
	}
	for (char &x : b){
		if (x == '6')
		x = '5';
	}
	cout << stoll (a) + stoll (b)<<" ";
}
int main(){
int t;
cin >> t;
cin.ignore();
while (t--){
	string a,b;
getline (cin,a);
getline (cin,b);
min (a,b);
max (a,b);
cout << endl;
	
	
}	
return 0;
}