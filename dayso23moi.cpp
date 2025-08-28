#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    long long prev2 = 1; 
    long long prev1 = 1; 
    long long current = 0;
    for (int i = 3; i <= n; ++i) {
        current = (2 * prev1 % MOD + 3 * prev2 % MOD) % MOD;
        prev2 = prev1;
        prev1 = current;
    }
    cout << current << endl;
    return 0;
}
