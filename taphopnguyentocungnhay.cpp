#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long sum = n * (n + 1) / 2;
        if (sum < k || (sum + k) % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        long long x = (sum + k) / 2;
        long long y = (sum - k) / 2;
        if (ucln(x, y) == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
