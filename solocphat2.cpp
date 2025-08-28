#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool isValid() {
    for (int i = 1; i <= n - 2; i++) {
        if (a[i] == 8 && a[i+1] == 8 && a[i+2] == 8) {
            return false;
        }
    }
    return true;
}
bool check(){
	int sum = 0;
	for (int i=1;i<=n;i++){
		sum += a[i];
	}
	if (sum % 3 == 0)
	return true;
	return false;
}
void inkq() {
    if (isValid()&&check()) {
        for (int i = 1; i <= n; i++) {
            cout << a[i]; 
        }
        cout << " ";
    }
}
void backtrack(int pos) {
    for (int i = 6; i <= 8; i += 2) { 
        a[pos] = i;
        if (pos == n) {
            inkq(); 
        } else {
            backtrack(pos + 1); 
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        backtrack(1);
        cout << endl;
    }
    return 0;
}
