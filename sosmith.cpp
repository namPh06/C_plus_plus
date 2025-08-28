#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if (n < 2)
	return 0;
	for (int i=2;i<=sqrt(n);i++)
	if (n % i ==0 )
	return 0;
	return 1;
}
int sum (int n){
	int sum = 0;
		while (n != 0){
		sum += n %10;
		n /= 10;
	}
	return sum ;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int m = n;
	     int sum1 = sum(n);
		 vector < int > v;
		for (int i=2;i<=sqrt(m);i++){
			while (m % i == 0){
				v.push_back (i);
				m /=i;
			}
		}
		if (m !=1)
		v.push_back(m);
		int sum2 = 0;
		 for (int i=0; i < v.size();i++){
		 	sum2 += sum(v[i]);
		 }
	
	    if (!nt(n) && sum1 == sum2)
		cout << "YES\n";
		else cout <<"NO\n";	
	}
	return 0;
}