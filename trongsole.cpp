#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
      long long even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0; 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even_sum = (even_sum + a[i]) % MOD;
            even_count++;
        } else {
            odd_sum = (odd_sum + a[i]) % MOD;
            odd_count++;
        }
    }
    long long result = (even_sum * odd_count + odd_sum * even_count) % MOD;
    
    cout << result << endl;
    return 0;
}
