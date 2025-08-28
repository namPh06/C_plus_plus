#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        
        for (int i = 2; i <= sqrt(n); i++) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
        
        if (n != 1) {
            v.push_back(n);
        }
        
        if (v.size() >= k) {
            cout << v[k-1] << endl; 
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}