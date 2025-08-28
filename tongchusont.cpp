#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 5;
vector<bool> is_prime(MAX, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
bool check(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return is_prime[sum];
}
int main() {
	sieve();
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
