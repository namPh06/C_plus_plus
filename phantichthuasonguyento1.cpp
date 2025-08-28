#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        int n;
        cin >> n;
        cout << "Test " << k << ": ";
        bool check = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                int cnt = 0;
                while (n % i == 0) {
                    cnt++;
                    n /= i;
                }
                if (!check) cout << " ";
                cout << i << "(" << cnt << ")";
                check = false;
            }
        }
        if (n != 1) {
            if (!check) cout << " ";
            cout << n << "(1)";
        }
        cout << endl;
    }
    return 0;
}
