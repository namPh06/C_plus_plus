#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string a,b;
		cin >> a >> b;
		int len = max(a.size() , b.size());
		while (a.size() < len)
		a ="0"  + a;
		while (b.size() < len)
		b = "0" + b;
		if (a < b)
		swap (a,b);
		string ans ="";
		int carry = 0;
		for (int i = len - 1; i>=0;i--){
			int digit = (a[i] - '0') - (b[i] - '0') - carry;
			if (digit < 0){
				carry = 1;
				digit += 10;
			}
			else carry = 0;
			ans = to_string (digit) + ans;
		}
		cout << ans << endl;
	}
	return 0;
}