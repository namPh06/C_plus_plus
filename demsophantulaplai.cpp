#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map < int ,int > mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        int sum = 0;
        for (int i=0;i<n;i++){
		
     if (mp[a[i]]>=2)
     {
     sum += mp[a[i]];
	 mp[a[i]]=0;	
	 }
     }
     cout << sum << endl;
    }
    return 0;
}
