#include <iostream>
using namespace std;

int a[100], n;

void inkq() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void backtrack(int pos) {
    for (int i = 0; i <= 1; i++) {
        if (pos > 1 && a[pos - 1] == 1 && i == 1) continue;  // Ki?m tra di?u ki?n
        a[pos] = i;
        if (pos == n) {
            inkq();
        } else {
            backtrack(pos + 1);
        }
    }
}

int main() {
    cin >> n;
    backtrack(1);
    cout << endl;
    return 0;
}
