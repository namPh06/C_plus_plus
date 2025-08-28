#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
const int MAX_N = 1000;
long long C[MAX_N + 1][MAX_N + 1]; 
void precompute() {
    for (int i = 0; i <= MAX_N; ++i) {
        C[i][0] = C[i][i] = 1; 
        for (int j = 1; j < i; ++j) {
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }
}
int main() {
    precompute(); 
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << endl;
    }
    return 0;
}
