#include <bits/stdc++.h>
using namespace std;
int check (int n){
	if (n < 2)
	return 0;
	for (int i =2;i<=sqrt(n);i++)
	if (n% i == 0)
	return 0;
	return 1;
}
int tong(int n){
	int sum = 0;
	while (n != 0){
		sum += n %10;
		n /= 10;
	}
	return sum;
}
int main(){
	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 2;i<=n;i++){
		if (check(i) && tong(i) % 2 == 0)
		ans += i;
	}
	cout << ans;
	return 0;
}