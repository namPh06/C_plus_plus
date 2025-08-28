#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main(){
    int t;
    cin >> t;
    long long f[1001] = {0};
    f[0] = 0;
    f[1] = 1;
    
    for (int i = 2; i < 1001; ++i){
        f[i] = (f[i-1] + f[i-2]) % mod;
    }
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
    
    return 0;
}
