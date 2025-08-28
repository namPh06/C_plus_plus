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
        long long ans = LLONG_MIN; 
        for (int i = 0; i < n; i++) {
            long long tich = 1;
            for (int j = i; j < n; j++) { 
                tich *= a[j]; 
                ans = max(ans, tich); 
                if (a[j] == 0) {
                    break; 
                }
            }
        }
        cout << ans << endl; 
    }
    return 0;
}
