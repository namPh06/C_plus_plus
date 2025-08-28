#include <bits/stdc++.h>
using namespace std;
int main(){
	long long  n,k;
	cin >> n >> k;
     vector <int > v;
	for (int i = 1;i<= k ;i++){
		v.push_back( n % i);
	}
	if (v.size() < 2)
	{
		cout <<"NO";
		return 0;
	}
	else {
	int  ok = 1;
   for (int i = 1 ;i< (int) v.size();i++){
   	  if ( v[i] == v[i-1])
   	  {
   	  	ok = 0;
   	  	break;
		 }
   }
   if ( ok == 1)
   cout <<"Yes";
   else cout <<"No";
	return 0;
}
}