#include <bits/stdc++.h>
using namespace std;
int main(){
		 string s;
		 cin >> s;
		 if (s.size() == 1){
		 	cout << 0;
		 	return 0;
		 }
		 long long sum  = 0;
		 for (char x : s){
		 	sum += x - '0';
		 }
		 if (sum < 10){
		 	cout << 1;
		 	return 0;
		 }
		int cnt = 1;
		while (sum >= 10) {
        int ans = 0;
        while (sum > 0) {
            ans += sum % 10;
            sum /= 10;
        }
        cnt++;
        sum = ans;
    }
    cout << cnt;
	return 0;
}