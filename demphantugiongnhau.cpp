#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--){
	int n;
    cin >> n;
    map <int,int> mp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; 
            cin >> x;
            if (mp[x] == i - 1) {
                mp[x] = i;
            }
        }
    }
int dem = 0;
    for (auto it : mp){
    	if (it.second == n){
    		dem ++;
		}
	}
  cout << dem << endl;
}
    return 0;
}
