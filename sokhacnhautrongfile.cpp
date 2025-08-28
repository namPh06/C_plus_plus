#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen ("DATA.in", "r", stdin);
    map<int, int> mp;  
    int x;
    while (cin >> x) {
        mp[x]++; 
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
     return 0;
}
