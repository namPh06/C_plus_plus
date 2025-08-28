#include <bits/stdc++.h>
using namespace std;
int check (int n){
	int cnt1 = 0;
	int cnt2 = 0;
	while (n != 0){
		int a = n%10;
		if (a %2 == 0)
		cnt1++;
		else if (a %2 !=0)
		cnt2 ++;
		n /= 10;
	}
	if (cnt1 == cnt2)
	return 1;
	else return 0;
}
int main(){
	int n;
	cin >> n;
	int cnt = 0;
	int l = pow(10,n-1);
	int r = pow (10,n)-1;
	for (int i=l;i<=r;i++){
		if (check(i))
		{
		cnt ++;
		cout << i <<" ";
		if (cnt%10==0)
		cout << endl;}
	}
	return 0;
}