#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string a,b;
		cin >> a >> b;
		int max_length = max(a.size(),b.size());
		while (a.size() < max_length)
		a = "0" + a;
		while (b.size() < max_length)
		b = "0" + b;
		int carry = 0;
		string res ="";
		for (int i = max_length - 1;i>=0;i--){
			int digit = (a[i]-'0') + (b[i]-'0')+ carry;
			carry = digit / 10;
			res = char (digit % 10 + '0') + res;
		}
		if (carry > 0){
			res = char (carry + '0')+ res;	
		}
		cout << res << endl;
	}
	return 0;
}