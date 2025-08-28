#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s;
        cin >> s;
        
        if (isupper(s)) {
            cout << (char)tolower(s) << endl;  
        } else if (islower(s)) {
            cout << (char)toupper(s) << endl;
        }
    }
    return 0;
}
