#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
    int arr[n];
    map<int, int> mp;
    int maxVal = 0;
    for (int i=0;i<n;i++) {
		cin >> arr[i];
		mp[arr[i]]++;
		maxVal = max(maxVal, mp[arr[i]]);
	}
    int secondVal = 0;
	int ans = 0;
    for (int i=0;i<n;i++) {
		if (mp[arr[i]] != maxVal) {
			if (mp[arr[i]] > secondVal) {
				secondVal = mp[arr[i]];
				ans = arr[i];
			}
		}
	}
    if (ans != 0) {
		cout << ans << endl;
	}
	else cout << "NONE\n";
    return 0;
}