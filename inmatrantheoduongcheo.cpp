#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int sum = 0; sum <= n + m - 2; sum++) {
            if (sum % 2 == 0) {
                for (int i = min(sum, n - 1); i >= 0 && sum - i < m; i--) {
                    cout << a[i][sum - i] << " ";
                }
            } else {
                for (int i = max(0, sum - m + 1); i < n && sum - i >= 0; i++) {
                    cout << a[i][sum - i] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}