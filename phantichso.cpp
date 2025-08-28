#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> X ={10,20,50};
int a[100];
void inkq(int pos) {
    for (int i = 1; i <= pos; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void backtrack(int pos, int sum) {
    for (int i = 0; i < X.size(); i++) { 
        if (sum + X[i] <= N) {     
            a[pos] = X[i];
            if (sum + X[i] == N) {  
                inkq(pos);
            } else {                
                backtrack(pos + 1, sum + X[i]);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> N;
        backtrack(1, 0);
        cout << endl;
    }
    return 0;
}