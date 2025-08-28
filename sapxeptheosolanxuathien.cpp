#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first)
        return a.first > b.first;  
    return a.second < b.second;   
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
      int a[n];       
        map<int, int> cnt;    
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
          vector<pair<int, int>> v;
        for (auto it : cnt) {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto it : v) {
            for (int i = 0; i < it.first; i++) {
                cout << it.second << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
