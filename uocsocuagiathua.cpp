#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, p;
        cin >> n >> p;
        int count = 0;
        long long ans = p;
        while (ans <= n) {
            count += n / ans;
            ans *= p;  
        }
        
        cout << count << endl;
    }
    
    return 0;
}
