#include <bits/stdc++.h>
using namespace std;
string phantich(char a){
	if (a == '0'|| a == '1')
	return "";
	else if (a =='2') // 2! = 1! * 2! giu lai 2 
	return "2";
	else if (a == '3') // 3! = 3! giu lai 3
	return "3";
	else if (a =='4')// 4! = 2! * 2! *3!
	return "322";
	else if (a=='5')// 5! = 5!;
	return "5";
	else if (a=='6')// 6! = 3!* 5!;
	return "53";
	else if (a=='7')// 7! = 7!;
	return "7";
	else if (a=='8') // 8! = 2! * 2! *2!*7!;
	return "7222";
	else if (a== '9')// 9! = 2! * 3!* 3! *7!;
	return "7332";	
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		string a;
		cin >> n >> a;
		string tmp ="";
		for (int i=0;i<a.size();i++){
			tmp += phantich (a[i]);
		}
		sort (tmp.begin(),tmp.end(),greater<int>());
		cout << tmp << endl;
	}
	return 0;
}