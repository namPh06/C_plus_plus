#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        string original = s;
        int ans = -1; 

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] > s[j]) {
                    swap(s[i], s[j]);
                    if (s < original) { 
                        ans = max(ans, stoi(s));
                    }
                    swap(s[i], s[j]); 
                }
            }
        }

        cout << ans << endl; 
    }
    return 0;
}
