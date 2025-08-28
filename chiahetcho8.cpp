#include <bits/stdc++.h>
using  namespace std;
long long du (string a , long long k){
	long long n = 0;
	for (char x : a){
		n = n * 10 + x- '0';
		n %= k;
	}
	return n;
}
long long solve(string s,long long m){
	 
	
long long ans  = 0;
long long r = 0;
for (int i=0;i<s.size();i++){
	for (int j=i;j<s.size();j++)
{
r = r * 10 + s[j]-'0';
	r %=m;
	string b = to_string (r);
	if (du (b,8)==0&&du(b,3)!=0)
	ans ++;
}
}
return ans;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
   string s;
   cin >> s;
   cout << solve (s,8);
	}
	return 0;
}