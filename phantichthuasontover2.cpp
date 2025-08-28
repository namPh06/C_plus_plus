#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7;
vector<int> primes;
void sieve() {
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve(long long n) {
    for (int i = 0; (long long)primes[i] * primes[i] <= n; ++i) {
        if (n % primes[i] == 0) {
            int cnt = 0;
            while (n % primes[i] == 0) {
                cnt++;
                n /= primes[i];
            }
            cout << primes[i] << " " << cnt << endl;
        }
    }
    if (n > 1) {
        cout << n << " " << 1 << endl;
    }
}

int main() {
    sieve(); 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
       solve(n);
    }
    return 0;
}
